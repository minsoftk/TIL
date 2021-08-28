# 프로젝트 시작

### 1. import , export 문법

파일을 쪼갤때 활용하는 문법

```react
//여러개의 변수를 export할때는 아래와 같이 해준다.
let name = "kim"
let name2 = "Park"
export {name , name2}
```

## 2. map 함수 제대로 쓰기

```react
{shoes.map((item, i) => {
							return <ShoesItem shoes={shoes[i]}></ShoesItem>;
						})}
```

왼쪽에 있는 item은 shoes의 하나하나의 데이터를 의미한다. 오른쪽 i는 반복문돌때의 idx 역할을 한다.



## 3. react-router-dom

```react
//브라우저라우터
<BrowserRouter>
	<App />
</BrowserRouter>
//해쉬라우터 # 기호가 생긴다.
<HashRouter>
	<App />
</HashRouter>

둘다 비슷하지만 해쉬라우터가 좀 더 안전하게 라우팅할 수 있게 도와줌 `#`뒤에 적는 것은 서버로 전달이 되지 않는다. 라우팅은 리액트가 알아서 잘 해줄 수 있다.

브라우저라우터를 썼을때 서버에서 서버 라우팅 방지하는 API를 작성해야 한다.
URL이 #기호로 드러워지는 HashRouter를 왜쓰죠?

A. 원래는 브라우저 주소창에 뭔가 페이지를 입력하면 서버에게 특정 페이지좀 보여달라는 요청이 됩니다.

근데 우리는 요청할 서버가 없고 그냥 리액트가 라우팅을 담당하고 있습니다.

그래서 잘못하면 있지도 않은 페이지를 서버에 요청을 해서 404 Page Not Found 이런 에러도 뜨고 그럴 수 있습니다.

실수로 서버에게 요청하지 않게 하려면 안전하게 #을 붙여주어야합니다.

왜냐면 브라우저 주소창에서 # 뒤에 붙은 것들은 절대 서버로 요청되지 않으니까요.
```

```react
{/* <Route path="/어쩌구" component={Modal}>
					<div>디테일페이지</div>
				</Route> */}
```

```react
//링크를 이용하여 페이지를 이동하는 방법
<Navbar.Brand>
    <Link to="/">Astronaut</Link>
</Navbar.Brand>
```

```react
//링크말고도 페이지 중간중간에 이동하고 싶은 경우가 생긴다
import { useHistory } from 'react-router-dom';
function Detail() {
	let history = useHistory(); //방문 기록등을 저장해놓는 object이다.
}
history.goBack(); //이전페이지로 이동
history.push('/sdfsdf') //이상한 경로를 써도 해당 경로로 이동한다.

//swithch의 역할은?
//라우터는 매칭이되면 다 보여주기 때문에 switch라는 컴포넌트로 라우트를 감싼다. 그러면 하나의 라우터만 선택이 된다.
```



```scss
.shose-alert {
	background: #eeeeee;
	padding: 20px;
	border-radius: 5px;
	max-width: 500px;
	width: 100%;
	margin: auto;
}
.shose-alert2{
	@extend .shoes-alert; //shoes-alert의 모든 속성을 넣어주세요
}

@mixin 함수(){
    background: #eeeeee;
	padding: 20px;
	border-radius: 5px;
	max-width: 500px;
	width: 100%;
	margin: auto;
}
.myFunction {
 @include 함수()   
}
```
