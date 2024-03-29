import React, { useCallback } from 'react';
import TodoListItem from './TodoListItem';
import './TodoList.scss';
import { List } from 'react-virtualized';
const TodoList = ({ todos, onRemove, onToggle }) => {
	const rowRenderer = useCallback(
		({ index, key, style }) => {
			const todo = todos[index];
			return (
				<TodoListItem
					todo={todo}
					key={key}
					onRemove={onRemove}
					onToggle={onToggle}
					style={style}
				></TodoListItem>
			);
		},
		[onRemove, onToggle, todos],
	);
	return (
		<List
			className="TodoList"
			width={512}
			height={513}
			rowCount={todos.length} //항목개수
			rowHeight={56}
			rowRenderer={rowRenderer}
			list={todos}
			style={{ outline: 'none' }} //list에 적용되는 outline 스타일 제거
		></List>
	);
};

export default React.memo(TodoList);
