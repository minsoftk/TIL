import React from 'react';
import WithRouterSample from './WithRouterSample';
const data = {
	user: {
		id: 'minsoftk',
		pwd: 1234,
	},
	user2: {
		id: 'minsungk',
		pwd: '12',
	},
};

const Profile = ({ match }) => {
	const { userid } = match.params;
	console.log({ userid });
	//match안의 params 값을 참조
	console.log(data[userid]);
	const info = data[userid];
	if (!info) {
		return <div>존재하지 않는 사용자입니다.</div>;
	}
	return (
		<div>
			<h3>
				{userid}({info.id})
			</h3>
			<p>{info.pwd}</p>
			<WithRouterSample></WithRouterSample>
		</div>
	);
};
export default Profile;
