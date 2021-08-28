# 1. 왜 React가 필요한가?

모바일 App처럼 스무스하게 동작하는 웹들. 일명 Web App처럼 동작하게 만들기 위해서. 새로고침없이 웹 탐색이 가능하게 한다. 앱이랑 사용성이 비슷하기 때문에 웹 앱이라고 한다. 웹 앱을 쉽게 만들기 위해 React를 사용한다.

## 장점?

1. 모바일 앱으로 발행이 쉽다. 앱처럼 만들어놨기 때문에. 리액트 문법으로 iOS/Android 모바일 앱 제작 가능.
2. 앱처럼 뛰어난 UX
3. 그냥 웹사이트보다 비즈니스적 강점

4. 서버개발자가 편해져서
5. 많은 사람들이 react를 사용한다.

## 단점?

View만을 강조했기에 그 이외의 기능은 직접구현을 하거나 써드파티 라이브러리를 이용해야 한다.

## nodejs를 왜 설치해야하나?

create-react-app 라이브러리를 설치하기 위해서. npm 툴을 이용할 수 있기 때문에.

### 3. JSX

리액트를 쓰는 이유 . **데이터 바인딩이 정말 쉽다.** 데이터 바인딩이란? 서버에서 받아온 데이터를 HTML에 집어넣는 과정을 데이터 바인딩이라 한다.

```react
function App() {
	let post = '블로그 테스트';
	return (
		<div className="App">
			<div className="black-nav">{post}</div>
		</div>
	);
}
```

함수를 넣을 수도 있다.

```react
function App() {
    function 함수(){
        return 100
    }
	return (
		<div className="App">
			<div className="black-nav">{ 함수() }</div>
		</div>
	);
}
```

```react
<div className="black-nav" style={{color : 'blue', fontSize:'30px'}}>개발 블로그</div>
//자바스크립트에선 '-'가 빼기로 인식되기 때문에 CamelCase작성법을 따른다. 또한 JSX방식으로 object형식으로 입력해준다.
```

<br/>

### 4. State

useState를 쓰면 array가 만들어진다. [a,b]처럼 만들어진다. a는 입력한 변수값이고 b는 a를 수정할 함수가 들어간다. ES6 destructing 신문법. 즉, 변수 대신 쓰는 데이터저장공간

```react
let [a,b] = useState('남자 코트 추천'); //문자,숫자, array, object에 담긴 값을 쉽게 바꾸고 싶을때
```

### 왜 변수대신 state를 쓰는가?

- 웹이 App처럼 동작하게 만들고 싶어서, State는 변경되면 HTML이 자동으로 재렌더링이 된다. 하지만 그냥 변수들은 렌더링 되지 않는다. 자주 바뀌는, 중요한 데이터는 변수말고 state로 만들것.

### 함수

```react
<div className="listItem">
    <h4>
        {post[0]} <span onClick={ 함수() }>👍</span> 0
    </h4>
    <p>8월 2일 발행</p>
</div>
```

### state가 Object나 Array일때

```react
	const onClick = () => {
		let newPost = post; //shallow copy가 일어난다.
		newPost[0] = '분당 맛집 추천';
		setPost(newPost);
	};

//let newPost = [...post]; 스프레드 연산자를 써줘야 deep copy가 된다. deep카피란 값을 공유하는 것이 아니라 새로운 복사본을 생성한다. spread operator는 es6 새로운 문법. 중괄호를 제거하고 새로운 중괄호에 담는다는 의미. 일종의 테크닉.
```

리액트의 원칙인 immutable data를 지키기 위해서 사용한다. state를 직접 건들면 안된다.(렌더링이 안될수도)

### 5. Modal 만드는 법

Modal창들의 state를 통해서 컴포넌트를 나타내고 말고를 설정한다.

```react
(...)
<button
    onClick={() => {
        setModal(!modal);
    }}>
    모달창
</button>
{modal ? <Modal></Modal> : null}

function Modal() {
	return (
		<div className="modal">
			<h2>제목</h2>
			<p>날짜</p>
			<p>상세내용</p>
		</div>
	);
}
(...)
```

### 6. 반복문 쓰는법

```react
let Array = [2,3,4];
let newArray.map(function(a)){
          return a*2
          }
);
//newArray = [4,6,8]

//아래와 같이 반복을 줄일 수도 있다. text에는 post의 인자가 담긴다.
{post.map((text) => {
				return (
					<div>
						<h3>{text}</h3>
					</div>
				);
			})}

function 반복된UI(){
    let 어레이 = [];
    for (let i = 0; i < 3; i++)
        {
            어레이.push(<div>안녕</div>);
        }
    return 어레이
}
{ 반복된 UI() } //react에서 반복문 돌리는 방법
```

```react
/* eslint-disable */
import './App.css';
import React, { useState } from 'react';

function App() {
	let [post, setPost] = useState([
		{ title: '강남 고기 맛집', thumb: 0, date: '20년 7월 20일' },
		{ title: '분당 고기 맛집', thumb: 4, date: '20년 5월 22일' },
		{ title: '서현 고기 맛집', thumb: 3, date: '20년 9월 20일' },
		{ title: '춘천 고기 맛집', thumb: 0, date: '21년 4월 20일' },
	]);

	let [modal, setModal] = useState(false);

	const thumbClick = (e) => {
		let newPost = [...post];

		setPost(newPost);
	};
	return (
		<div className="App">
			<div className="black-nav" style={{ fontSize: '30px' }}>
				<div>개발 블로그</div>
			</div>
			{post.map(({ title, thumb, date }) => {
				return (
					<div className="post">
						<h4>
							{title} <span onClick={thumbClick}>👍</span> {thumb}
						</h4>

                        이 부분에 thumb 값을 어떻게 넘겨주지?


						<p>{date}</p>
						<button onClick={() => setModal(!modal)}>모달창</button>
						{modal ? <Modal></Modal> : null}
						<hr />
					</div>
				);
			})}
		</div>
	);
}

function Modal() {
	return (
		<div className="modal">
			<h2>제목</h2>
			<p>날짜</p>
			<p>상세내용</p>
		</div>
	);
}

export default App;

```

### 7. 현재는 class를 거의 쓰지 않는다.
