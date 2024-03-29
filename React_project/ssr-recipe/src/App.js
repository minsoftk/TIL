import React from 'react';
import { Route } from 'react-router-dom';
import Menu from './components/Menu';
import RedPage from './pages/RedPage';
import BluePage from './pages/BluePage';
const App = () => {
	return (
		<div>
			<Menu></Menu>
			<hr />
			<ul>
				<Route path="/blue" component={BluePage}></Route>
				<Route path="/red" component={RedPage}></Route>
			</ul>
		</div>
	);
};

export default App;
