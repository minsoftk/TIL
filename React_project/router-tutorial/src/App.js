import React from 'react';
import Home from './Home';
import About from './About';
import Profile from './Profile';
import Profiles from './Profiles';
import HistorySample from './HistorySample';
import { Route, Link } from 'react-router-dom';

const App = () => {
	return (
		<div className="App">
			<ul>
				<li>
					<Link to="/">홈</Link>
				</li>
				<li>
					<Link to="/about">소개</Link>
				</li>
				<li>
					<Link to="/profiles">프로필</Link>
				</li>
				<li>
					<Link to="/history">히스토리 예제</Link>
				</li>
			</ul>
			<hr />
			<Route path="/" component={Home} exact={true}></Route>
			<Route path={['/about', '/info']} component={About}></Route>
			<Route path="/profiles" component={Profiles}></Route>
			<Route path="/history" component={HistorySample}></Route>
		</div>
	);
};

export default App;
