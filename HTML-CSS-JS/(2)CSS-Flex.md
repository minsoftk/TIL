## 2-5. Flex

* Inline Block 사용시 블록이 늘어날때 밑으로 내려가는 문제점이 있었다. 이것을 해결하기 위해 flex를 사용.
* inline-block은 block같이 width, height 설정이 가능하지만 너무 old하고 단점이 많다... Responsive Design(반응형 디자인)을 지원하지 않는다.
* 이를 적용하려면 부모 엘리먼트에만 명시해준다. 예를 들면 body에 div 3개가 있을때 body에 명시를 해준다. 

```ruby
<style>
.father{
  display: flex;
  justify-content:center;
  align-items:center; 로도 가능하다
  flex-direction: column //row
  flex-wrap: no wrap
 .box{
  background-color :red;
  width: 200px;
  height: 200px;
  margin-right: 7.3px;
  }
</style>
  <div class="father">
    <div class="box"></div>
  </div>
```

![](https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=https%3A%2F%2Fblog.kakaocdn.net%2Fdn%2FWqMLc%2FbtqKGjPkHdm%2F5A5sK6n06Iw2jSJA6PwsKK%2Fimg.png)

<br/>
<br/>

* father의 flex를 지워버리면 block이 되버리고 flex 사용시 .box에 inline block이라고 적지 않아도 inline block이 된다.
* justify-content는 main axis(주축-수평)에 적용된다.
* align-items는 cross axis(교차축-수직)에 적용된다.
* 주축은 수평, 교차축은 수직으로 default 설정이 돼 있다.
* height: 20vh에서 vh란 viewpoint height, 뷰포인트를 screen으로 생각해도 된다. 화면높이의 20%를 의미한다.
* 축 변경 flex로 설정했을때 디폴트는 row이다. 
```css
flex-direction : column
default 값은 row이다.
colum-reverse 는 순서가 바뀐다.
 flex-wrap: no wrap
 wrap-reverse도 사용가능하다.
```
* 주축은 수직이되고 교차축은 수평이 된다.

<br/>

> 설정값 설명  

 justify-content: space between; 컨텐츠가 같은 간격으로 조정이 된다.  

 justify-content: space around : 컨텐츠 뿐만 아니라 그 주변도 같은 간격으로 조정이 된다.

 flex-direction 방향이 row 이면 justify는 수평으로, align은 수직으로 적용이 된다.  

 flex-direction 방향이 column 이면 justify는 수직으로, align은 수평으로 적용이 된다.  

 flex는 부모박스에만 적용을 한다.  


 flex-wrap: no wrap (default)
 폭은 무시하고 다 줄어드는 것이다. wrap으로 하면 화면을 줄여도 폭은 그대로 유지해주지만 컨텐츠를 밑으로 내려준다.

<br/>

* display:flex를 한 뒤에 justify, align 사용 가능하다.  
* 부모 컨테이너를 플렉스로 선언하면, 그안에 종속된 칠드런 박스들을 움직일 수 있다. 그래서 각각의 박스에 명령을 적용할 필요가 없다.
<br/><br/><br/>

## 2-6. Fixed
```css
<style>
	body{
		height: 100vh;
		//height: 1000vh;
		margin: 20px;
	}
	div{
		position: fixed;
		width: 300px;
		height: 300px;
		color: white;
		background-color: teal;
	}
</style>
```
* fixed로 해놓으면 계속 화면에 고정 돼 있는 것을 확인할 수 있다. 초기 레이아웃에 위치된 자리에 고정된다.
* top, left, right, bottom 속성에 조금만 변화를 줘도 block, margin이든 신경 쓰지 않는다. 서로 다른 레이어에 존재하게 된다. 즉, 전에는 같은 레이어에서 접촉하고 있었지만 속성에 값을 주는 순간 다른 레이어가 된다.
<br/>
<br/>
<br/>

## 2-6-2. Static & relative
```css
<style>
	body{
		height: 100vh;
		//height: 1000vh;
		margin: 50px;
	}
	div{
		position: fixed;
		width: 300px;
		height: 300px;
		color: white;
		background-color: teal;
	}
	.green{
		background-color: teal;
		height:100px;
		width:100px;
		position: relative;
		top:-10px;
		left:-10px;
	}
</style>
<body>
	<div>
		<div class="green"></div>
	</div>
</body>
```
* staic은 처음자리에 고정시키는 것
* relative는 element가 처음 위치한 곳을 기준으로 수정하는 것. left,top,right,bottom을 통해서 수정한다. 첫 기준점이 정말 중요하다.
<br/>

#### position: absolute의 특성
```css
<style>
	body{
		height: 100vh;
		//height: 1000vh;
		margin: 50px;
	}
	div{
		position: relative;
		width: 300px;
		height: 300px;
		color: white;
		background-color: teal;
	}
	.green{
		background-color: teal;
		height:100px;
		width:100px;
		position: absolute;
		top:-10px;
		left:-10px;
	}
</style>
<body>
	<div>
		<div class="green"></div>
	</div>
</body>
```
* 가장 가까운 relative 부모를 기준으로 이동시켜준다. 위 코드를 보면 green을 감싸는 div가 relative이므로 감싸는 div 기준으로 고정된다. 만약 div에 relative가 빠진다면 body를 기준으로 움직인다. 많은 사람들이 실수하는 부분은 박스를 absolute로 만들고 부모를 relative로 만들지 않았는데 왜 body 기준으로 옮겨지는지 알지 못한다.

<br/>
<br/>
<br/>

## 2-7. CSS Selector and Pseudo Selectors

- Pseudo Selector(가상 셀렉터) : 셀렉터인데 element가 아닌 것

```css
<style>
  input[type="submit"]{
  background-color: red;
  }

  </style>
  <div class="box">
    <input type="password">
    <input type="submit">
```

* input[type="submit"] 이런 식으로 타입으로 셀렉터를 지정할 수 있다. 가짜 셀렉터를 만드는 방법

```css
<style>
  input[type="submit"]{
  background-color: red;
  }
  i
  </style>
  <body>
  <div class="box"></div>
  <div class="box"></div>
  <div class="box">
    <input type="password">
    <input type="submit">
   </body>
   #어떻게 박스 3의 색상이 초록색으로 변하게 할 수 있을까? html tag, id ,class를 사용하지 않고

.box:last-child{
  background-color:pink;
}
마지막 자식을 선택한다.

.box:nth-child(2),
.box:nth-child(4){
  background-color:pink;
}
.box:nth-child(even){
  background-color:pink;
}
->짝수만 선택하게 만든다.

.box:nth-child(3n+1){
  background-color:pink;
}
->마음대로 정할 수 있다.
```
## 2-8. Combinators
```css
<style>
span{
	color: tomato;
}
div p span{
	color: teal;
}
</style>
<body>
	<div>
		<span>hello</span>
		<p>Lorem ipsum dolor sit amet consectetur
	</div>
</body>
```
* <p>라는 부모태그에서 <span> 자식태그를 가진 것에 css를 적용한다. 구조가 존재하지 않으면 적용되지 않는다. 

input + .box{
  "이것의 의미는 서로 형제라는 뜻이다."
  input다음에 오는 box class를 찾는다.
}
input > .box{
  "direct child : 직계라는 의미"
}

>직계 외에는 해당하지 않는다.
```
