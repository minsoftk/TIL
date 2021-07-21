# 1. 리액트 이해

- 페이스 북에서 개발한 리액트는 자바스크립트 라이브러리로 사용자 인터페이스를 만드는 데 사용한다. 구조가 MVC, MVW인 프레임워크와 달리 오직 V만 신경쓰는 라이브러리.

- 기존의 뷰를 날려버리고 새로 렌더링을 한다.
- 컴포넌트란 사용자 인터페이스를 다룰 때 사용하는 템플릿과는 다르다. 컴포넌트는 재사용이 가능한 API로 수많은 기능들을 내장한다. 컴포넌트 하나에서 해당 컴포넌트의 생김새와 작동 방식을 정의한다.

- 리액트 라이브러리 는 뷰를 어떻게 렌더링하길래 데이터가 변할 때마다 새롭게 리렌더링 하면서 성능을 아끼고, 최적의 사용자 경험을 제공할 수 있나?

* 자바스크립트를 이용하여 render함수가 반환하는 결과를 DOM에 반영하지 않고 이전에 render 함수가 만들었던 컴포넌트 정보와 현재 render함수가 만든 컴포넌트를 비교한다. 두가지 뷰의 최소한의 연산으로 비교 후 둘의 차이를 알아내 최소한의 연산으로 DOM트리를 업데이트 한다.

## Virtual DOM (리액트의 주요 특징)

- DOM이란 Document Object Model의 약어입니다. 객체로 문서 구조를 표현하는 방법으로 XML HTML로 작성. 웹 브라우저는 DOM을 활용하여 객체에 자바스크립트와 CSS를 적용한다. DOM은 트리 형태라서 특정 노드를 찾거나 수정하거나 제거하거나 원하는 곳에 삽입할 수 있다.

* DOM자체의 연산은 빠르다. 하지만 CSS를 다시 연산하고, 레이아웃 구성하고, 페이지를 리페인트 과정에서 시간이 허비됨.
* 이런 DOM 처리 횟수를 최소화하기 위해 Virtual DOM방식을 사용한다. 그래서 바뀐 부분만 실제 DOM에 적용한다.

## 그렇다면 왜 React가 장점을 가지는가?

- 단순 라우팅 정도만 있는 정적인 페이지에는 리액트를 사용하지 않는 편이 더 나은 성능을 보이기도 한다.
- 리액트와 버추얼 DOM이 제공할 수 있는 것은 바로 업데이트 처리 간결성. UI를 업데이트 하는 과정에서 생기는 복잡함을 모두 해소하고, 더욱 쉽게 업데이트에 접근할 수 있다.

* 리액트는 프레임워크가 아니라 라이브러리다.
* 다른 웹 프레임워크나 라이브러리와 혼용할 수 있다.

## 단점은?

- 오로지 VIEW만 신경 쓰므로 Ajax, 데이터모델링 라우팅 같은 기능을 직접 구현해야한다.

## 작업환경 설정

- Node.js는 웹 브라우저 환경이 아닌 곳에서도 자바스크립트를 사용하여 연산할 수 있다.

* React는 웹 브라우저에서 실행되는 코드이므로 Node.js와 직접적인 연관은 없지만, 프로젝트를 개발하는 데 필요한 주요 도구들이 Node.js를 사용한다. 이때 사용하는 개발도구는 ECMAscript 6를 호환시켜 주는 바벨(babel), 모듈화된 코드를 한 파일로 합치고(번들링) 코드를 수정할 때마다 웹 브라우저를 리로딩하는 등의 여러 기능을 지닌 웹팩
* ES6란 ? -> 자바스크립트 공식 문법

- `import React from 'react'`  
  index.js를 시작으로 필요한 파일을 다 불러와서 번들링을 한다.

### ESlint

- 자바스크립트 문법 및 코드 스타일을 검사

### Reactjs Code Snippets

- 코드 스니펫 모음.

### 웹팩

# 2. JSX에 대해서 (react 특징중 하나)

## 문법

- 1. 감싸인
     하나의 부모요소로 감싸야 한다. -> Virtual DOM에서 컴포넌트 변화를 감지할 때 효율적으로 비교할 수 있도록. 하나의 DOM 트리 구조로 이루어져야한다는 규칙때문에.

* Fragment를 사용해 감싸줄 수 도 있다. `<> </>`도 가능.
* var는 scope단위이기 때문에 단점을 해결하기 위해 `let`, `const`가 사용됨.

# 3. 컴포넌트

- 클래스, 함수형 컴포넌트가 있다.

* 함수형 컴포넌트의 장점?
  클래스형 컴포넌트보다 선언하기가 편하다. 메모리 자원도 덜 사용한다. 결과물의 파일 크기가 더 작기도 하다. 함수형 컴포넌트의 주요 단점은 state와 라이프사이클 api의 사용이 불가능하다는 점. -> 이후 Hooks라는 기능으로 해결.

* 화살표 함수란?
  ES6에서 함수를 표현하는 새로운 방식. 사용 용도가 기존의 function을 이용한 함수 선언 방식을 아예 대체하지는 않는다. 함수를 파라미터로 전달할때 유용.
  화살표 함수를 사용했을 때는 자신이 종속된 인스턴스를 가르킨다. 일반 함수는 자신이 종속된 객체를 this로 가리킨다.

```js
function twice(value) {
	return value * 2;
}
const triple = (value) => value * 3;

{
	/*{}를 열지 않으면 연산한 값 그대로 반환한다는 의미 */
}
```

- `export default MyComponent;`의 의미
  다른 파일에서 이 파일을 import할때 MyComponent 클래스를 불러오도록 설정

## Props

Props는 Properties를 줄인 표현으로 컴포넌트 속성을 설정할 때 사용하는 요소입니다. props 값은 해당 컴포넌트를 불러와 사용하는 부모 컴포넌트에서 설정 가능.

- 비구조화 할당 기법
  아래와 같이 props를 내부 값을 바로 추출한다.

* 함수형 컴포넌트에서 props를 사용할 때 이렇게 파라미터 부분에서 비구조화 할당 문법을 사용한다.

```js
const MyComponent = (props) => {
	const { name, children } = props;
	return (
		<div>
			나의 새롭고 멋진 컴포넌트{name}
			<br />
			children값은 {children}
		</div>
	);
};
```

```js
const MyComponent = (name, children, favoriteNumber) => {
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
```

- PropType
  이것을 설정해서 오류는 뜨지 않지만 웹 브라우저상에서 console창에 오류를 띄어줌. 만약 값 형식이 다를 경우.

* isRequired를 사용하여 필수 propTyped를 설정

## class 컴포넌트에서 props사용하기

```js
ckass MyComponent extends Component{

	render (){
		const {name, favoriteNumber, children} = this.props; //비구조화 할당
		return (
			<div>
			나의 새롭고 멋진 컴포넌트{name}
			<br />
			children값은 {children}
			<br />
			내가 좋아하는 숫자는 {favoriteNumber}
		</div>
		);
	}
};
```

## State

- 리액트 state는 컴포넌트 내부에서 바뀔 수 있는 값을 의미한다. props는 컴포넌트가 사용되는 과정에서 부모 컴포넌트가 설정하는 값, 컴포넌트 자신은 해당 props를 읽기 전용으로만 사용할 수 있다.
  `super(props)`의 역할은 현재 클래스형 컴포넌트가 상속하고 있는 리액트의 Component 클래스가 지닌 생성자 함수를 호출.

```js
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
						this.setState( prev => {
							return number: prev.number + 1 });
					}}>
					+1
				</button>
			</div>
		);
	}
}
export default Counter;
```

## 함수형 컴포넌트에서 useState사용하기 (Hooks)

```js
import React, { useState } from 'react';

const Say = () => {
	const [message, setMessage] = useState('');
	const [color, setColor] = useState('');
	const onClickEnter = () => setMessage('안녕하세요');
	const onClickLeave = () => setMessage('안녕히가세요');

	return (
		<div>
			<button onClick={onClickEnter}>입장</button>
			<button onClick={onClickLeave}>퇴장</button>
			<h1 style={{ color }}> {message}</h1>
			<button style={{ color: 'red' }} onClick={() => setColor('red')}>
				빨강색
			</button>
			<button style={{ color: 'blue' }} onClick={() => setColor('blue')}>
				하늘색
			</button>
			<button style={{ color: 'green' }} onClick={() => setColor('green')}>
				초록색
			</button>
		</div>
	);
};

export default Say;
```

- 정리하자면 props는 부모 컴포넌트가 설정하고, state는 컴포넌트 자체적으로 지닌 값으로 컴포넌트 내부에서 값을 업데이트할 수 있습니다.  
  props를 사용한다고 값이 무조건 고정적이진 않다. 부모 state를 자식 컴포넌트 props로 전달하고 자식 컴포넌트에서 특정 이벤트가 발생할 때 부모 컴포넌트 메서드를 호출하면 props도 유동적으로 사용 가능.

* class에서만 state, lifeCycle사용이 가능했지만 `Hook`으로 함수형에서도 사용이 가능하다.

# 4. 이벤트핸들링

1. 카멜표기법
2. 함수형태의 값을 전달한다.
3. DOM요소에만 이벤트 설정 가능.

```js
onChange={
	(e)=>{
		console.log(e);//e.target.value
}
```

- `e`는 `SyntheticEvent`로 웹 브라우저의 네이티브 이벤트를 감싸는 객체이다.

* state에 값을 넘겨줄 수도 있다.

```js
	onChange={
(e)=>{
	this.setState(
	{
	message:e.target.value
	}
	)
	}
```

## Property Initializer Syntax를 사용한 메서드 작성

- 메서드 바인딩 생정자 메서드에서 하는 것이 정석. 하지만 이 작업을 불편하다고 느낄 수도 있다. 바벨의 transform-class-properties 문법을 사용하여 화살표 함수 형태로 메서드를 정의.
  원래는 생성자에 메서드 바인딩을 해줘야 하지만 화살표 함수를 사용하여 편리하게 작성 가능.

```js
state = {
	message: '',
	username: '',
};
handleChange = (e) => {
	this.setState({
		[e.target.name]: e.target.value,
	});
};
```

- 객체 안에서 key를 `[]`로 감싸면 그 안에 넣은 레퍼런스가 가리키는 실제 값이 `key`값으로 사용됩니다.

* onKeyPress

```js
handleKeyPress = (e) => {
	if (e.key === 'Enter') {
		this.handleClick();
	}
};
```

# 함수형 컴포넌트로 구현하기(Hooks)

- 클래스에서의 이벤트 핸들링

```js
import React, { Component } from 'react';

class EventPractice extends Component {
	state = {
		message: '',
		username: '',
	};
	handleChange = (e) => {
		this.setState({
			[e.target.name]: e.target.value,
		});
	};
	handleClick = () => {
		alert(this.state.message);
		this.setState({
			message: '',
		});
	};
	handleKeyPress = (e) => {
		if (e.key === 'Enter') {
			this.handleClick();
		}
	};
	render() {
		return (
			<div>
				<h1>이벤트 연습</h1>
				<input
					type="text"
					name="message"
					placeholder="아무거나 입력해보세요"
					value={this.state.message}
					onChange={this.handleChange}
					onKeyPress={this.handleKeyPress}
				/>
				<button onClick={this.handleClick}>확인</button>
			</div>
		);
	}
}

export default EventPractice;
```

- 함수형에서 이벤트핸들링

```js
import React, { useState } from 'react';

const EventPractice = () => {
	const [form, setForm] = useState({
		username: '',
		message: '',
	});
	const { username, message } = form;
	const onChange = (e) => {
		const nextForm = {
			...form, //기존의 form 내용을 이 자리에 복사한 뒤
			[e.target.name]: e.target.value, //원하는 값을 덮어 씌움
		};
		setForm(nextForm);
	};
	const onClick = () => {
		alert(username + ': ' + message);
		setForm({
			username: '',
			message: '',
		});
	};
	const onKeyPress = (e) => {
		if (e.key === 'Enter') {
			onClick();
		}
	};
	return (
		<div>
			<h1>이벤트연습</h1>
			<input
				type="text"
				name="username"
				placeholder="사용자명"
				value={username}
				onChange={onChange}
			/>
			<input
				type="text"
				name="message"
				placeholder="말을 입력하세요"
				value={message}
				onChange={onChange}
				onKeyPress={onkeypress}
			/>
			<button onClick={onClick}>확인</button>
		</div>
	);
};

export default EventPractice;
```

## 4. 이벤트 핸들링 정리

- 클래스, 함수형을 사용한 이벤트 핸들링, useState에서 form 객체를 사용하는 방법.

# 5. Ref

- 리액트 프로젝트 내부에서 DOM에 이름을 다는 방법을 ref라고 한다. ref는 전역적으로 작동하지 않고 컴포넌트 내부에서만 작동하기 때문에 이런 문제가 생기지 않는다.

## 어떠한 경우에 사용해야하나?

- DOM을 꼭 직접적으로 건드려야 할때
