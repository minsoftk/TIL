import React, { Suspense, useState } from 'react';
import logo from './logo.svg';
import './App.css';
import loadable from '@loadable/component';

const Split = loadable(() => import('./Split'), {
	fallback: <div>loading...</div>,
});

const App = () => {
	const [visible, setVisible] = useState(false);
	const onClick = () => {
		setVisible(true);
		alert();
	};
	const onDelete = () => {
		setVisible(false);
	};
	return (
		<div className="App">
			<img src={logo} className="App-logo" alt="logo" />
			<p onClick={onClick} hover="point">
				Edit <code>src/App.js</code> and save to reload.
			</p>
			{visible && <Split></Split>}

			<p onClick={onDelete}>없애기</p>
		</div>
	);
};

export default App;
