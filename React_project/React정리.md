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
  1.  특정 input에 포커스 주기
  2.  스크롤박스 조작
  3.  canvas요소에 그림그리기

## 콜백함수를통한 ref

```js
<input
	ref={(ref) => {
		this.input = ref;
	}}
/>
```

## 정리

- DOM에 직접 접근해야 할 때는 ref를 사용한다. 하지만 ref를 사용하지 않고도 원하는 기능을 구현할 수 있는지 반드시 고려. 컴포넌트끼리 데이터를 교류할 때는 언제나 데이트를 부모<->자식 흐름으로 교류해야 한다. 리덕스 or Context API를 사용하여 효율적으로 교류.

# 6. 컴포넌트 반복

- 반복되는 내용을 효율적으로 관리하는 방법.

* map 함수를 이용한다.
  `arr.map(callback,[thisArg])`
  -currentValue:현재처리하고 있는 요소
  -index:현재처리하고 있는 요소의 index값
  -array: 현재 처리하고 있는 원본 배열

```js
const numbers=[1,2,3,4,5];
const result = numbers.map(num = > num*num); //es6문법
console.log(result);

const names =['눈사람','얼음','눈','바람'];
const nameList = names.map(names => <li>{names}</li>)
```

## Key란 무엇인가?

리액트에서 key는 컴포넌트 배열을 렌더링 했을 때 어떤 원소에 변동이 있었는지 알아내려고 사용합니다. 예를 들어 유동적인 데이터를 다룰 때는 원소를 새로 생성하거나 제거하거나 수정할 수 있다. key가 없을때는 Virtual DOM을 비교하는 과정에서 리스트를 순차적으로 비교하면서 변화를 감지한다.

## Key설정

키값을 설정할 떄는 map함수의 인자로 전달되는 함수 내부에서 컴포넌트props를 설정하듯이 설정하면 된다. key값은 언제나 유일해야 한다. 데이터가 가진 고윳값을 key값으로 설정해야 한다.

- 고유값이 없을 때만 index값을 key로 사용해야 한다. index를 key로 사용하면 배열이 변경될 때 효율적으로 리렌더링하지 못한다.

## 응용

객체 형태로 정보 담기.

```js
const IterationSample = () => {
	const [names,setNames] = useState([
		{id:1,text:'눈사람'},
		{id:2,text:"얼음"},
		{id:3,text:'눈'},
		{id:4,text:'바람'},
	]);
	const[inputText,setInputText] = useState('');
	const[nextid, setNextId]=useState(5);
	const nameList = names.map((names) => <li key={names.id}>{names.text}</li>);
	return(
		<ul>{nameList}</ul>
	);
```

<br/>
<br/>

## 객체 배열에 내용 추가하기

- 배열에 push함수를 이용하지 않고 concat을 사용했는데 push는 기존 배열 자체를 변경해주는 반면 concat은 새로운 배열을 만들어준다는 차이가 있다. 리액트에서 상태를 업데이트할 때는 기존상태를 그대로 두면서 새로운 값을 상태로 설정해야 한ㄷ. 이를 불변성 유지라고 한다. 그래야 컴포넌트의 성능을 최적화 할 수 있다.

```js
import React, { useState } from 'react';

const IterationSample = () => {
	const [names, setNames] = useState([
		{ id: 1, text: '눈사람' },
		{ id: 2, text: '얼음' },
		{ id: 3, text: '눈' },
		{ id: 4, text: '바람' },
	]);
	const [inputText, setInputText] = useState('');
	const [nextid, setNextId] = useState(5);
	const onChange = (e) => {
		setInputText(e.target.value);
	};
	const onClick = () => {
		const nextNames = names.concat({
			id: nextid,
			text: inputText,
		});
		setNextId(nextid + 1);
		setNames(nextNames);
		setInputText('');
	};
	const namesList = names.map((names) => <li key={names.id}>{names.text}</li>);
	return (
		<>
			<input value={inputText} onChange={onChange} />
			<button onClick={onClick}>추가</button>
			<ul>{namesList}</ul>
		</>
	);
};
export default IterationSample;
```

<br/>

## 객체배열 데이터 제거 기능

filter라는 내장 함수를 사용한다.

<br/>

## 6. 정리

반복되는 데이터를 렌더링 하는 방법을 배웠고 이를 응용하여 유동적인 배열을 다루었다. 컴포넌트 배열을 렌더링할 때는 key값 설정에 항상 주의해야 한다. 또 key 값은 언제나 유일해야 한다. key값이 중복된다면 렌더링 과정에서 오류가 발생한다.  
배열에 직접 접근하는 것이 아닌 `concat`, `filter`등 배열 내장 함수를 사용하여 새로운 배열을 만든 후 이를 새로운 상태로 설정해줘야 한다.

<br/>

# 7. 컴포넌트 라이프 사이클

- 리액트 프로젝트를 진행하다 보면 가끔 컴포넌트를 처음으로 렌더링할 때 어떤 작업을 처리해야 하거나 컴포넌트를 업데이트하기 전후로 어떤 작업을 처리해야 할 수도 있고, 불필요한 업데이트를 방지해야 할 수도 있다. 이때 컴포넌트의 라이프사이클 메서드를 사용한다.

  1.마운트
  DOM이 생성되고 웹 브라우저상에 나타나는 것을 마운트라고 한다. 이때 호출하는 메서드는 `constructor`, `getDerivedStateFromProps`, `render`, `componentDidMount`

  2.업데이트
  Props가 바뀔 때, state가 바뀔 때, 부모 컴포넌트가 리렌더링될때, this.forceUpdate로 강제로 렌더링을 트리거할 때

  3.언마운트
  마운트의 반대과정. 즉 컴포넌트를 DOM에서 제거하는 것을 언마운트라고 한다.

<br/>

## render함수

`render(){...}`
컴포넌트의 모양새를 정의
이 메서드 안에서 this.props와 this.state에 접근할 수 있으며, 리액트 요소를 반환한다.  
DOM정보를 가져오거나 state에 변화를 줄때는 `componentDidMount`에서 해야한다.

## Constructor

이것은 컴포넌트의 생성자 메서드로 컴포넌트를 만들때 처음으로 실행됨. 초기 state설정 가능

<br/>

## getDerivedStateFromProps 메서드

props로 받아온 값을 state에 동기화시키는 용도로 사용하며, 컴포넌트가 마운트될 때와 업데이트 될때 호출.

```js
static getDerivedStateFromProps(nextProps, prevState) {
	if (nextProps.value !== prevState.value){
		return {value: nextProps.value};
	}
	return null; //state를 변경할 필요가 없다면 null을 반환.
}
```

## componentDidMount 메서드

컴포넌트를 만들고, 첫 렌더링을 다 마친후 실행. 다른 자바스크립트 라이브러리 또는 프레임 워크의 함수를 호출하거나 이벤트 등록, setTimeout,setInterval, 네트워크 요청 같은 비동기 작업을 처리한다.

<br/>

## shouldComponentUpdate메서드

이것은 props 또는 state를 변경했을 때, 리렌더링을 시작할지 여부를 지정하는 메서드입니다. true 혹은 false를 반환해야 한다. 컴포넌트를 만들 때 이 메서드를 따로 생성하지 않으면 기본적으로 true를 반환. 컴포넌트 최적화할때 주로 사용

<br/>

## getSnapshotBeforeUpdate 메서드

<br/>

## coponentDidUpdate 메서드

`coponentDidUpdate(prevProps, prevState, snapshot)
리렌더링을 완료한 후 실행. 업데이트가 끝난 직후이므로, DOM 관련 처리를 해도 무방. prev 인자들로 이전에 가졌던 데이터에 접근 가능.

<br/>

## componentWillUnmount 메서드

이것은 컴포넌트를 DOM에서 제거할 때 실행합니다. 등록한 이벤트,타이머, 직접 생성한 DOM이 있다면 여기서 제거 작업.

<br/>

## componentDidCatch 메서드

컴포넌트 렌더링 도중에 에러가 발생했을 때, 애플리케이션 먹통이 되지않고 오류 UI를 보여줄 수 있게한다. this.porps.children으로 전달되는 컴포넌트에서 발생하는 에러만 잡아낼 수 있다. 자기 자신에게 발생하는 에러는 잡아낼 수 없다.

```js
componentDidCatch(error, info) {
	this.setState({
		error:true
	});
	console.log({error,info});
}
```

# 8. Hook

useState는 가장 기본적인 Hook이며, 함수형 컴포넌트에서도 가변적인 상태를 지닐 수 있게 해준다. 함수형 컴포넌트에서도 상태를 관리해야 한다면 이 Hook을 사용한다.

<br/>

## 8.1 useState

하나의 useState함수는 하나의 상태 값만 관리할 수 있다. 컴포넌트에서 관리해야 할 상태가 여러 개여도 관리할 수 있다.

<br/>

## 8.2 useEffect

useEffect는 리액트 컴포넌트가 렌더링될 때마다 특정 작업을 수행하도록 설정할 수 있는 Hook이다.

```js
useEffect(() => {
	console.log('렌더링이 완료되었습니다.');
	console.log({
		name,
	});
	return () => {
		console.log('cleanup');
		console.log(name);
	};
}, []); //[]를 넣으면 처음 렌더링 될때만 실행한다.
//[name] 을 넣으면 특정값 업데이트가 수행된다.
```

- 뒷정리 함수가 호출될 때는 업데이트되기 직전의 값을 보여준다.
  App.js에서 Info 컴포넌트를 visible 상태를 바꿨을때 return 되면서 상태를 변경함.

<br/>

## 8.3 useReducer

더 다양한 컴포넌트 상황에 따라 다양한 상태를 다른 값으로 업데이트해 주고 싶을 때 사용하는 Hook. 리듀서라는 개념은 리덕스와 더 자세히 배운다.(17장)  
리듀서는 현재상태, 그리고 업데이트를 위해 필요한 정보를 담은 액션 값을 전달받아 새로운 상태를 반환하는 함수이다. 리듀서 함수에서 새로운 상태를 만들 때는 반드시 불변성을 지켜줘야 한다.

- useReducer를 사용해서 다시 Counter 구현해보기

* useReducer를 사용했을 때의 가장 큰 장점은 컴포넌트 업데이트 로직을 컴포넌트 바깥으로 빼낼 수 있다는 것이다.

<br/>

## 8.3.2 인풋상태 관리하기

기존에는 인풋이 여러 개여서 useState를 여러번 사용했는데 useReducer를 사용하면 기존에 클래스형 컴포넌트에서 input태그에 name값을 할당하고 e.target.name을 참조하여 setState 해준 것과 유사한 방식으로 작업 처리 가능.

```js
import React, { useEffect, useReducer, useState } from 'react';

function reducer(state, action) {
	return {
		...state,
		[action.name]: action.value,
	};
}

const Info = () => {
	const [state, dispatch] = useReducer(reducer, {
		name: '',
		nickname: '',
	});
	const { name, nickname } = state;
	const onChange = (e) => {
		dispatch(e.target);
	};
	return (
		<div>
			<div>
				<input name="name" onChange={onChange}></input>
				<input name="nickname" onChange={onChange}></input>
			</div>
			<div>
				<div>
					<b>이름: </b> {name}
				</div>
				<div>
					<b>닉네임: </b>
					{nickname}
				</div>
			</div>
		</div>
	);
};
export default Info;
```

useReducer에서 액션은 그 어떤 값도 사용 가능하다. 이벤트 객체가 지니고 있는 e.target 값 자체를 액션 값으로 사용.

<br/>

## 8.4 useMemo

함수형 컴포넌트 내부에서 발생하는 연산을 최적화 할 수 있다.
리스트의 목록이 바뀔때만 getAverage가 호출된다.

<br/>

## 8.5 userCallback

useMemo와 상당히 비슷한 함수. 주로 렌더링 성능을 최적화해야 하는 상황에서 사용. 이벤트 핸들러 함수를 필요할 때만 생성할 수 있다. 이전에 onChange와 onInsert라는 함수를 선언했는데 컴포넌트가 리렌더링 될 때마다 함수들이 새로 생성된다. 대부분 문제 없지만 컴포넌트의 렌더링이 자주 발생하거나 렌더링해야 할 컴포넌트의 개수가 많아지면 이 부분을 최적화 해주는 것이 좋다.  
useEffect는 props의 업데이트, useCallback은 함수를 입력 받는다.
이벤트 핸들러 함수를 필요할 때만 생성할 수 있다.
컴포넌트가 리렌더링 될때마다 함수를 새로 만드는 것이 아니라 한번 함수를 만들고 재사용할 수 있도록 useCallback Hook을 사용.
<br/>

## 8.6 useRef

함수형 컴포넌트에서 ref를 더 쉽게 사용할 수 있게 해준다.  
등록버튼을 눌렀을 때 포커스가 input으로 넘어가게 해준다.

```js
//useCallback, useMemo, useRef
import React, { useState, useMemo, useRef, useCallback } from 'react';

const getAverage = (numbers) => {
	console.log('평균값 계산중..');
	if (numbers.length === 0) return 0;
	const sum = numbers.reduce((a, b) => a + b);
	return sum / numbers.length;
};

const Average = () => {
	const [list, setList] = useState([]);
	const [number, setNumber] = useState('');
	const inputEl = useRef(null);

	const onChange = useCallback((e) => {
		setNumber(e.target.value);
	}, []); // 컴포넌트가 처음 렌더링 될 때만 함수 생성
	const onInsert = useCallback(() => {
		const nextList = list.concat(parseInt(number));
		setList(nextList);
		setNumber('');
		inputEl.current.focus();
	}, [number, list]); // number 혹은 list 가 바뀌었을 때만 함수 생성

	const avg = useMemo(() => getAverage(list), [list]);

	return (
		<div>
			<input value={number} onChange={onChange} ref={inputEl} />
			<button onClick={onInsert}>등록</button>
			<ul>
				{list.map((value, index) => (
					<li key={index}>{value}</li>
				))}
			</ul>
			<div>
				<b>평균값:</b> {avg}
			</div>
		</div>
	);
};

export default Average;
```

- ref값이 바뀌어도 컴포넌트는 렌더링되지 않는다.

## 8.8 Hook 커스터마이징

## 8.9 정리

# 9. 컴포넌트 스타일링

## 9.1 가장흔한방식, 일반 css

카카오톡 클론코딩

## 9.2 Sass사용하기

Sass(Syntatically Awesome Style Sheets) - ()문법적으로 매우 멋진 스타일시트)는 css전처리기로 복잡한 작업을 쉽게 할 수 있도록 해주고, 스타일 코드의 재활용성을 높여 줄 뿐만 아니라 코드의 가독성을 높여서 유지 보수를 더욱 쉽게 해준다. `.scss`, `.sass` 지원한다.

```css
/* .sass */
$font-stack: Helvetica, sans-serif
$primary-color:#333

body
	font:100% $font-statck
	color: $primary-color
```

```css
/* .scss */
$font-stack: Helvetica, sans-serif;
$primary-color:#333;

body {
	font:100% $font-statck
	color: $primary-color
}
```

`.sass`는 중괄호와 세미콜론을 사용하지 않는다. 반면 `.scss`확장자는 기존 css를 작성하는 방식과 비교해서 문법이 크게 다르지 않다.

```
yarn add node-sass
npm install node-sass@4.14.1 // 낮은 버전으로 설치해야 한다.
```

Sass를 css로 변환해주는 라이브러리
CRA이랑은 5.0버전과 충돌이 난다. 따라서 낮은 버전을 설치해줘야 한다.

## 9.2.2 sass-loader 설정 커스터마이징하기

프로젝트 디렉터리를 많이 만ㄴ들어서 구조가 깊어졌다면 해당 파일에서는 상위 폴더로 한참 거슬러 올라가야한다. 이 문제점은 웹팩에서 Sass를 처리하는 sass-loader의 설정을 커스터마이징해서 해결할 수 있다. Create-react-app에선 커스터마이징이 숨겨져 있다. 이를 커스터마이징 하기 위해 `yarn eject`로 세부 설정을 밖으로 꺼내 준다.

## 9.2.3 node_modules에서 라이브러리 불러오기

```css
@import '~libary/styles';
```

## 9.4 styled component 사용하기

자바스크립트 파일 하나에 스타일까지 작성할 수 있기에 .css, .scss 확장자를 가진 스타일 파일을 따로 만들지 않아도 된다는 큰 이점이 있다.

## 9.4.1 Tagged 템플릿 리터럴

## 9.4.5 반응형 디자인

# 10. Todo app 만들기

1. sass 인식 오류 해결

https://github.com/velopert/learning-react/issues/311

2. todos에 새 객체 추가하기. 왜 useState가 아닌 useRef를 사용하는가? id값은 렌더링 되는 정보가 아니기 때문이다. 단순히 새로운 항목을 만들 때 참조되는 값이기 때문에. onInsert함수를 컴포넌트 성능을 아끼기 위해서 useCallback으로 감싸준다.

3. submit 이벤트는 브라우저에서 새로고침을 발생.
   `onsubmit`은 발생. `onclick`으로도 만들 순 있지만 `onkeypress`를 따로 작성해줘야한다.

4. 삭제, 수정기능

# 11. 컴포넌트 성능 최적화

10장에서 학습한 지식을 활용해 일정 관리 애플리케이션을 만들어봤다. 현재까지는 불편하지 않지만 추가되어 있는 데이터가 매우 적기 때문이다. 그러나 데이터가 무수히 많아지면, 애플리케이션이 느려지는 것을 체감할 정도로 지연이 발생.
기본값에 함수를 넣어주었다는 것. 만약 `useState(test())`라고 작성하면 리렌더링 될때매다 test가 호출되지만 `useState(test)`처럼 파라미터를 함수 형태로 넣어 주면 컴포넌트가 처음 렌더링될 때만 test함수가 실행이 된다.

## 느려지는 원인 분석

1. 자신이 전달받은 props가 변경될 때
2. 자신의 state가 바뀔 때
3. 부모 컴포넌트가 리렌더링될 때
4. forceUpdate 함수가 실행될 때

## 해결법

1. React.memo를 사용하여 컴포넌트 성능 최적화
   TodoListItem 컴포넌트에 props를 todo, onRemove,
   onToggle을 받아오는데 export에 memo를 감싸주면 바뀌지 않으면 리렌더링을 하지 않는다.

2. useState의 함수형 업데이트
   setNumber(number+1)을 하는것이 아니라, 어떻게 업데이트를 할지 정의해 주는 업데이트 함수를 넣어준다. 그러면 useCallback을 사용할 때 두번째 파라미터로 넣는 배열에 number를 넣지 않아도 된다.
   u

```js
const onToggle = useCallback((id) => {
	setTodos((todos) =>
		todos.map((todo) =>
			todo.id === id ? { ...todo, checked: !todo.checked } : todo
		)
	);
}, []);
```

## 11.5.2 useReducer 사용하기

useState의 함수형 업데이트를 사용하는 대신, useReducer를 사용해도 onToggle과 onRemove가 계속 새로워지는 문제를 해결할 수 있다.

## 11.6 불변성의 중요성

## 11.7 TodoList 컴포넌트 최적화

## 11.8 react-virtualized를 사용한 렌더링 최적화

2500개의 컴포넌트가 렌더링 돼 있는데 화면에 보이는 것은 아홉개뿐이다. 하지만 다른 것이 렌더링 돼 있기에 시스템 자원 낭비이다. 따라서 필요한 부분만 렌더링 시킨다.

## 11.9

많은 데이터를 렌더링하는 리스트를 만들어 지연을 유발해보고, 해결해봤다. 리액트 컴포넌트의 렌더링은 기본적으로 빠르기 때문에 컴포넌트를 개발할 때 최적화 작업에 대해 너무 큰 스트레스를 받거나 모든 컴포넌트에 일일이 React.memo를 작성할 필요는 없다. 하지만 보여줄 항목이 100개 이상이고 업데이트가 자주 발생한다면 꼭 최적화가 필요하다.

## 12 immer사용

전개연산자(...)와 배열 내장 함수를 사용하여 불변성을 유지하는 것은 어렵지 않지만, 상태가 복잡해진다면 귀찮은 작업이 된다. 예를 들어 객체가 복잡한 구조를 가지고 있을 경우 그럴때 immer라이브러리를 사용하면 객체 안에 있는 값을 직접 수정하거나, 배열에 직접적인 변화를 일으키는 push, splice등의 함수를 사용해도 무방하다.

```js
import produce from 'immer';

const nextState = produce(originalState, (draft) => {
	draft.somewhere.deep.inside = 5;
});
```

produce라는 함수는 두가지 파라미터를 받는다. 첫번째 파라미터는 수정하고 싶은 상태이고 두번째 파라미터는 상태를 어떻게 업테이트할지 정의하는 함수이다. 두번째 파라미터로 전달되는 함수 내부에서 원하는 값을 변경하면, produce 함수가 불변성 유지를 대신해주면서 새로운 상태를 생성해준다.

# 13. 리액트 라우터로 SPA 개발하기

웹에서 제공되는 정보가 많기 때문에 새로운 화면을 보여주어야할때마다 서버측에서 모든 뷰를 준비한다면 성능상의 문제가 발생. 애플리케이션 내에서 화면 전환이 일어날 때마다 html을 계속 서버에 새로 요청하면 사용자의 인터페이스에서 사용하고 있던 상태를 유지하는 것도 번거롭고, 바뀌지 않는 부분까지 새로 불러와서 보여주어야하기 때문에 불필요한 로딩이 있어서 비효율적. 리액트 같은 라이브러리 혹은 프레임워크를 사용하여 뷰 렌더링을 사용자의 브라우저가 담당하도록 하고 애플리케이션을 브라우저에 불러와서 실행 후 사용자와의 인터랙션이 발생하면 필요한 부분만 자바스크립트를 사용하여 업데이트 해준다.
제공하는 페이지는 한 종류이지만, 해당 페이지에서 로딩된 자바스크립트와 현재 사용자 브라우저의 주소 상태에 따라 다양한 화면을 보여 줄 수 있다.

## SPA 단점

앱의 규모가 커지면 자바스크립트 파일이 너무 커진다는 것. 페이지 로딩 시 사용자가 실제로 방문하지 않을 수도 있는 페이지의 스크립트도 불러오기 때문. **코드 스플리팅**을 사용해 라우트별로 파일들을 나누어 트래픽과 로딩속도를 개선할 수 있다.
리액트 라우터처럼 브라우저에서 자바스크립트를 사용하여 라우팅을 관리하는 것은 자바스크립트를 사용하지 않는 일반 크롤러에서는 페이지의 정보를 제대로 수집해 가지 못한다는 잠재적인 단점이 있다.

[ssr vs csr]
(https://medium.com/@msj9121/next-js-%EC%A0%9C%EB%8C%80%EB%A1%9C-%EC%95%8C%EA%B3%A0-%EC%93%B0%EC%9E%90-8727f76614c9)

`<BroserRouter>`로 HTML5의 History API를 사용하여 페이지를 새로고침하지 않고도 주소를 변경하고 현재 주소에 관련된 정보를 props로 쉽게 조회하거나 사용할 수 있도록 한다.

## 13.2.2 프로젝트에 라우터 적용

index.js에서 <BrowserRouter> 컴포넌트로 감싸준다.
그리고 App.js에서 <Route>로 경로 설정을 해준다.
`/about`으로 들어가면 `/` 일때의 결과값도 같이 나오는데 `/`가 중복으로 인식된다. `exact={true}`로 해결한다.
`<Route path="/" component={Home} exact={true}>

## 13.2.5 Link컴포넌트를 사용하여 다른 주소로 이동

리액트 라우터를 사용할때는 a태그를 사용하면 안된다. 사용하면 가지고 있던 상태들을 모두 날리고 렌더링된 컴포넌트들도 모두 사라지기에 처음부터 렌더링하게 된다.
History API를 사용하여 페이지의 주소만 변경해준다.
Link자체는 a태그로 이루어져 있지만, 페이지 전환을 방지하는 기능이 내장되어 있다.
`<Link to="주소">내용</Link>`

## 13.3 Route 하나에 여러 개의 path 설정하기

`<Route path={['/about', '/info']} component={About}></Route>`

## 13.4 URL파라미터와 쿼리

```js
import React from 'react';

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
		</div>
	);
};
export default Profile;
```

`<Route path="/profile/:userid" component={Profile}></Route>` 이런식으로 :userid를 넘겨준다.
`<Link to="/profile/user2">minsungk 계정</Link>` 그럼 user2가 넘어가고 data에서 user2의 객체를 참조한다.

match라는 객체안의 params값을 참조한다. match객체 안에는 현재 컴포넌트가 어떤 경로 규칙에 의해 보이는지에 대한 정보가 들어 있다. `/profile/:userid` 이렇게 설정하면 match.params.userid값을 통해 현재 userid값을 조회할 수 있다.

## 13.4.2 URL쿼리

location객체에 있는 search값에서 조회 가능하다. location 객체는 라우트로 사용된 컴포넌트에게 props로 전달되며, 웹 애플리케이션의 현재 주소에 대한 정보를 지니고 있다.

```js
{
	"pathname":"/about",
	"search": "?detail=true",
	"hash": ""
}
```

serach값에서 특정 값을 읽어오기 위해서는 이 문자열을 객체 형태로 변환해야 한다.
쿼리 문자열을 객체로 변환할때는 qs라는 라이브러리 이용한다.

## 13.5 서브 라우트

라우트 내부에 또 라우트를 정의하는 것.

```js
<Route
	path="/profiles"
	exact
	render={() => <div>사용자를 선택해주세요.</div>}></Route>
<Route path="/profiles/:userid" component=			{Profile}></Route>
```

보여주고 싶은 JSX를 넣어줄 수 있다.

## 13.6 리액트 라우터 부가 기능

history 객체는 라우트로 사용된 컴포넌트에 match, location과 함께 전달되는 props중 하나로, 이 객체를 통해 컴포넌트 내에 구현하는 메서드에서 라우터 api를 호출 할 수 있다. 특정 버튼을 눌렀을 때 뒤로 가거나, 로그인 후 화면을 전환하거나, 다른 페이지로 이탈하는 것을 방지해야할 때 history를 활용한다.

## 13.6.2 withRouter

## 13.7 정리

웹 브라우저에서 사용할 컴포넌트, 상태 관리를 하는 로직, 그 외 여러 기능을 구현하는 함수들이 점점 쌓이면서 자바스크립트 파일의 크기가 매우 커진다. 코드 스플리팅을 통해서 해결한다.

# 14 비동기 작업의 이해

웹 애플리케이션을 만들다 보면 처리할 때 시간이 걸리는 작업이 있다. 예를 들어 웹 애플리케이션에서 서버 쪽 데이터가 필요할 때는 Ajax 기법을 사용하여 서버의 API를 호출함으로써 데이터를 수신한다. 이렇게 서버의 API를 사용해야 할 때는 네트워크 송수신 과정에서 시간이 걸리기 때문에 작업이 즉시 처리되는 것이 아니라, 응답을 받을 때까지 기다렸다가 전달받은 응답 데이터를 처리한다. 이 과정에서 작업을 비동기적으로 처리한다.

1. callback
2. promise
   콜백지옥같은 코드가 형성되지 않게 하는 방안으로 ES6에 도입된 기능입니다.
3. async/await
   promise를 더욱 쉽게 사용할 수 있도록 해주는 ES2017 문법.

## 14.2 axios로 API호출해서 데이터 받아 오기

# 15.1 Context API를 사용한 전역 상태 관리 흐름 이해하기

# 16. 리덕스 라이브러리 이해하기

업데이트 로직을 나눠서 상태관리를 용이하게 만든다. 프로젝트 규모가 커질경우 상태관리가 굉장히 용이하다. 하지만 프로젝트 규모가 작다면 더욱 복잡하다.

# 19. 코드스플리팅

SPA를 사용하면 생기는 단점인 자바스크립트 파일이 커질때, 보지도 않는 페이지의 스크립트도 불러온다. 이를 방지하기 위한 기법
웹팩이라는 도구가 프로젝트에서 사용 중인 모든 자바스크립트 파일을 하나의 파일로 합친다. 모든 css파일도 하나의 파일로 합쳐진다. CRA의 기본 웹팩 설정에는 splitChunks라는 기능이 적용되어 여러 파일 간에 공유된 파일을 자동으로 따로 분리시켜 캐싱의 효과를 누릴 수 있다.

## 1. 코드 비동기 로딩을 통한 코드 스플리팅

import를 함수로 쓰면 Promise를 반환한다. 웹팩에서 지원하고 있다.

## 2. React.lazy와 Suspense를 통한 컴포넌트 코드 스플리팅

리액트 내장된 기능으로 16.6버전 부터 도입. 이전에는 import 함수를 통해 불러온 다음, 컴포넌트 자체를 state에 넣는 방식으로 구현함.

## 3.Loadable Components를 통한 코드 스플리팅

코드스플리팅을 편하게 하도록 도와주는 서드파티 라이브러리 서버 사이드 렌더링을 지원한다. (Suspense, React.lazy는 서버 사이드 렌더링을 지원하지 않는다.)
스플리팅된 파일을 미리 불러올 수 있는 기능도 있다.
서버사이드렌더링이란 웹 서비스의 초기 로딩 속도 개선, 캐싱 및 검색 엔진 최적화를 가능하게 해 주는 기술이다. 서버 사이드 렌더링을 사용하면 웹 서비스의 초기 렌더링을 사용자의 브라우저가 아닌 서버쪽에서 처리한다.

````js
import loadable from '@loadable/component';

const Split = loadable(() => import('./Split'), {
	fallback: <div>loading...</div>,
});

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
			{visible && <Split></Split>}

			<p onClick={onDelete}>없애기</p>
		</div>
	);
};

export default App;```
````

### 컴포넌트를 미리 불러오는 방법

(왜 미리 불러와?) -> 마우스 커서를 올리기만해도 로딩이 시작된다. 그리고 클릭했을때 렌더링 된다. 이런 기능을 구현하면 나중에 사용자에게 더 좋은 경험을 제공할 수 있다.

# 20. 서버사이드 렌더링

서버사이드 렌더링은 UI를 서버에서 렌더링하는 것을 의미한다. 앞에서 만난 리액트 프로젝트는 기본적으로 클라이언트 사이드 렌더링을 하고 있다. 자바스크립트를 실행해야 우리가 만든 화면이 사용자에게 보인다. 서버사이드렌더링을 구현하면 사용자가 웹 서비스에 방문했을 때 서버쪽에서 초기 렌더링을 대신해준다. 그리고 사용자가 html을 전달 받을 때 그 내부에 렌더링된 결과물이 보인다.

## 20.1 서버사이드렌더링 장점

검색 엔진이 우리가 만든 웹 애플리케이션의 페이지를 원활하게 수집할 수 있다. 리액트로 만든 SPA는 검색엔진크롤러 봇처럼 자바스크립트가 실행되지 않는 환경에서는 페이지가 제대로 나타나지 않는다.
서버에서 클라이언트 대신 렌더링을 해주면 검색엔진이 페이지의 내용을 제대로 수집해 갈 수 있다.

## 단점

브라우저가 해야 할 일을 서버가 하는 것이라 서버 리소스가 사용된다는 단점. 수많은 사용자가 동시에 웹 페이지에 접속하면 서버에 과부하가 발생하기 때문. 사용자가 많은 서비스라면 캐싱과 로드 밸런싱을 통해 성능 최적화를 해야 한다.
ssr을 사용하면 데이터 미리 불러오기, 코드 스플리팅과의 호환등 고려해야 할 사항이 더 많아져서 개발이 어려울 수 있다.

## 20.1.3 서버 사이드 렌더링과 코드 스플리팅 충돌

Route에 내용을 집어넣는 실수함. css 오탈자

## 20.3 서버 사이드 렌더링 구현하기

서버 사이드 렌더링을 구현하려면 웹팩 설정을 커스터마이징 해야 한다. cra로 만든 프로젝트에서는 웹팩 관련 설정이 기본적으로 모두 숨겨져 있다. `yarn eject`를 통해 밖으로 꺼내 준다.

## 20.3.1 서버 사이드 렌더링용 엔트리 만들기

엔트리란 웹팩에서 프로젝트를 불러올때 가장 먼저 불러오는 파일. index.server.js라는 파일을 생성. 이후

```js
import React from 'react';
import ReactDOMServer from 'react-dom/server';

const html = ReactDOMServer.renderToString(
	<div>Hello Server Side Rendering</div>
);
console.log(html);
```

이후 config-path.js에서 2줄을 추가해준다.

```js
//불러올 파일의 경로
	ssrIndexJs: resolveApp('src/index.server.js'),
//웹팩으로 처리한 뒤 결과물을 저장할 경로
	ssrBuild: resolveApp('dist'),
```

## express를 이용한 index.server.js 작성

```js
import React from 'react';
import ReactDOMServer from 'react-dom/server';
import express from 'express';
import { StaticRouter } from 'react-router-dom';
import App from './App';

const app = express();

//서버사이드렌더링을 처리할 핸들러 함수.
const serverRender = (req, res, next) => {
	//이 함수는 404가 떠야하는 상황에 404를 띄우지 않고 서버 사이드 렌더링을 해준다.
	const context = {};
	const jsx = (
		<StaticRouter location={req.url} context={context}>
			<App />
		</StaticRouter>
	);
	const root = ReactDOMServer.renderToString(jsx); //렌더링하고
	res.send(root); //클라이언트에게 결과물을 응답
};

app.use(serverRender);

//5000포트로 서버를 가동.
app.listen(5000, () => {
	console.log('Running on http://locathost:5000');
});
```

## 20.4 데이터 로딩

# 21장 백엔드
## Koa 

