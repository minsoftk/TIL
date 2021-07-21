import React from "react";
import PropTypes from "prop-types";

const MyComponent = ({ name, children, favoriteNumber }) => {
	return (
		<div>
			나의 새롭고 멋진 컴포넌트{name}
			<br />
			children값은 {children}
			<br />
			내가 좋아하는 숫자는 {favoriteNumber}
		</div>
	);
};

MyComponent.defaultProps = {
	name: "기본 이름",
	children: "자식",
};
MyComponent.propTypes = {
	name: PropTypes.string,
	favoriteNumber: PropTypes.number.isRequired,
};

export default MyComponent;
