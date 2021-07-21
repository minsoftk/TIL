import React, {useState} from 'react';

const Say = () => {
	const [message, setMessage] = useState('');
	const [color, setColor] = useState('');
	const onClickEnter = () => setMessage('안녕하세요');
	const onClickLeave = () => setMessage('안녕히가세요');
	
	return (
		<div>
			<button onClick={onClickEnter}>입장</button>
			<button onClick={onClickLeave}>퇴장</button>
			<h1 style={{color}}> {message}</h1>
			<button style={{color:'red'}} onClick={()=> setColor('red')}>빨강색</button>
			<button style={{color:'blue'}} onClick={()=> setColor('blue')}>하늘색</button>
			<button style={{color:'green'}} onClick={()=> setColor('green')}>초록색</button>	
		</div>
	);
};

export default Say;
