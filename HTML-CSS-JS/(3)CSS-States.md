## 2-9. CSS states
```html
<body>
    <style>
    .box{
        background-color:red;
        font-size:40px;
        }
    </style>
    <span class="box">
        lalala
    </span>
</body>
```
* inspection에서 :hov 를 살펴보면 active, focus, visited, hover가 있다.

* hover를 살펴보자

```html
.box:hover{
     background-color:pink;
     무언가가 올라가면 state가 변한다.
}
```
>마우스가 올라가면 상태가 변한다.

* active를 살펴보자

```html
.box:active{
     background-color:pink;
     무언가가 올라가면 state가 변한다.
}
```
>클릭하면 상태가 변한다.

* focus를 살펴보자

```html
.box:focus{
     background-color:pink;
     무언가가 올라가면 state가 변한다.
}
a:visited{
     color:pink;
     방문한 웹사이트의 링크 색깔에 변화를 준다.
}
```
>focus 됐을시 state가 변한다
> hover보다 중요하기 때문에 hover는 작동하지 않는다.

### focus-within
```html
<style>
	form:focus-within input:hover{
		border-color: seagreen;
		//form 엘리먼트안에 어떤 것이든 focused 되면 활성화 시킨다.
		조건들을 맘대로 지정할 수도 있다.
	}
</style>
<body>
	<form>
		<input type="text" name="" id""/>
		<input type="text" name="" id""/>
		<input type="text" name="" id""/>
	</form>
</body>
```

### placeholder
```html
<style>
p::selection{
	background-color:yellowgreen;
	color:white;
	커서로 드래그를 하면 색이 입혀진다.
}
p::first-letter{
	font-size:50px;
}
p::first-line{
	
}
input::placeholder{
	color: yellowgreen;
	만약 input만 해버리면 전체가 yellowgreen으로 되지만 위와 같이 해주면 placeholder만 색상 변경이 가능하다.
}
</style>
<input type="text" placeholder="Name">

<p>Lorem ipsum dolor sit amet consectetur</p>
```

# 변수를 가지게 하는 법
```html
<style>
	:root{
		--main-color: #fcce00;
	}
	p{
		background-color:var(--main-color)
	}
	a{
		background-color:var(--main-color)		
	}
</style>
```
* 위와 같이 변수를 쓸 수 있다. 만약 색을 바꿔야할 때 모든 것을 수정해야되기 때문에 위와 같은 방법이 편하다.
