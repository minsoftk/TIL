import React, { useState, useRef, useCallback, useReducer } from 'react';
import './App.css';
import TodoTemplate from './components/TodoTemplate';
import TodoInsert from './components/TodoInsert';
import TodoList from './components/TodoList';

function test() {
	const array = [];
	for (let i = 1; i <= 2500; i++) {
		array.push({
			id: i,
			text: `할일 ${i}`,
			checked: false,
		});
	}
	return array;
}

// function todoReducer(todos, action) {
// 	switch (action.type) {
// 		case 'INSERT': //새로 추가
// 			// {type: 'Insert', todo:{id:1,text:'todo', checked :false}}
// 			return todos.concat(action.todo);
// 		case 'REMOVE':
// 			return todos.filter((todo) => todo.id !== action.id);
// 		case 'TOGGLE':
// 			return todos.map((todo) =>
// 				todo.id === action.id ? { ...todo, checked: !todo.checked } : todo,
// 			);
// 		default:
// 			return todos;
// 	}
// }

const App = () => {
	//useReducer 사용하는 법도 있음.

	const [todos, setTodos] = useState(
		//[
		// {
		// 	id: 1,
		// 	text: '리액트의 기초 알아보기',
		// 	checked: true,
		// },
		// {
		// 	id: 2,
		// 	text: '컴포넌트 스타일링 해보기',
		// 	checked: true,
		// },
		// {
		// 	id: 3,
		// 	text: '일정 관리 앱 만들어 보기',
		// 	checked: false,
		// },
		//]
		test,
	);
	//고유값으로 사용될 id
	// ref를 사용하여 변수 담기
	const nextId = useRef(2501);
	const onInsert = useCallback((text) => {
		const todo = {
			id: nextId.current,
			text,
			checked: false,
		};
		setTodos((todos) => todos.concat(todo));
		nextId.current += 1;
	}, []);
	//삭제기능
	const onRemove = useCallback((id) => {
		setTodos((todos) => todos.filter((todo) => todo.id !== id));
	}, []);
	//수정 기능
	const onToggle = useCallback((id) => {
		setTodos((todos) =>
			todos.map((todo) =>
				todo.id === id ? { ...todo, checked: !todo.checked } : todo,
			),
		);
	}, []);
	return (
		<div>
			<TodoTemplate>
				<TodoInsert onInsert={onInsert}></TodoInsert>
				<TodoList
					todos={todos}
					onRemove={onRemove}
					onToggle={onToggle}
				></TodoList>
			</TodoTemplate>
		</div>
	);
};

export default App;
