import React from 'react';
import { Link } from 'react-router-dom';
const Menu = () => {
	return (
		<div className="App">
			<ul>
				<li>
					<Link to="/blue">Blue</Link>
				</li>
				<li>
					<Link to="/red">Red</Link>
				</li>
			</ul>
		</div>
	);
};

export default Menu;
