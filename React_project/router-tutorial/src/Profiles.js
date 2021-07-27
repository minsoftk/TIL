import React from 'react';
import { Link, Route, withRouter } from 'react-router-dom';
import Profile from './Profile';
import WithRouterSample from './WithRouterSample';
const Profiles = () => {
	return (
		<div>
			<h3>사용자 목록</h3>
			<ul>
				<li>
					<Link to="/profiles/user">user</Link>
				</li>
				<li>
					<Link to="/profiles/user2">user2</Link>
				</li>
			</ul>
			<Route
				path="/profiles"
				exact
				render={() => <div>사용자를 선택해주세요.</div>}></Route>
			<Route path="/profiles/:userid" component={Profile}></Route>
		</div>
	);
};
export default Profiles;
