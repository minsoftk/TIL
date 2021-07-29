import React, { Suspense, useState } from 'react';
import logo from './logo.svg';
import './App.css';
import loadable from '@loadable/component';

const Split = React.lazy(() => import('./Split'));
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
			<Suspense fallback={<div>loading...</div>}>
				{visible && <Split></Split>}
			</Suspense>
			<p onClick={onDelete}>없애기</p>
		</div>
	);
};

export default App;
