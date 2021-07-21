import React, { Component } from 'react';

class Counter extends Component {
	constructor(props) {
		super(props);
		//state 초기값 설정
		this.state = {
			number: 0,
			fixedNumber: 0,
		};
	}
	render() {
		const { number, fixedNumber } = this.state;
		return (
			<div>
				<h1>
					{number}
					<br />
				</h1>
				<h2>바뀌지 않는 값 : {fixedNumber}</h2>
				<button
					onClick={() => {
						this.setState(
							{
							number : number+1
							}
							,
							()=>{
								console.log('방금 state가 호출되었습니니다.');
								console.log(this.state)
							}
						);
					}}
					>
					+1
				</button>
			</div>
		);
	}
}
export default Counter;
