import React from 'react';

const TodoItem = ({ todo, onToogle, onRemove }) => {
	return (
		<div>
			<input type="checkbox"></input>
			<span>예제 테스트</span>
			<button>삭제</button>
		</div>
	);
};

const Todos = ({
	input, //인풋에 입력되는 텍스트
	todos, //할일 목록이 들어가 있는 객체
	onChangeInput,
	onInsert,
	onToggle,
	onRemove,
}) => {
	const onSubmit = (e) => {
		e.preventDefault();
		//submit을 눌러도 새로 실행하지 않게 한다.
	};
	return (
		<div>
			<form onSubmit={onSubmit}>
				<input />
				<button type="submit">등록</button>
			</form>
			<div>
				<TodoItem></TodoItem>
				<TodoItem></TodoItem>
				<TodoItem></TodoItem>
				<TodoItem></TodoItem>
				<TodoItem></TodoItem>
				<TodoItem></TodoItem>
			</div>
		</div>
	);
};

export default Todos;
