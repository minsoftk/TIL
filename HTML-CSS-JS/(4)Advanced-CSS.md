## 2-8. Transitions
### Transitions이란?
* 이동/변경을 멋지게 보여주는 효과

```css
<style>
	a{
		color:white;
		background-color:tomato;
		text-decoration:none;
		padding: 3px 5px;
		border-radius: 5px;
		transition: background-color 10s ease-in-out, color 5s ease-in-out;
		//: all 변화하는 모든것을 선택
	}
	a:hover{
		color:tomato;
		background-color:wheat;
	}
</style>
<body>
	<a href="#">Go home</a>
</body>
</html>
```
* Transition은 하나의 state에서 다른 state로 넘어갈 때 나타나는 효과 
* Transition은 focus, active, hover에서 효과적으로 적용이 된다. 
* Transition은 root element에 있어야 한다. state가 없는 상태에 있어야 한다.

## 2-9. Transformations
### Transformations이란?
* html문서의 element들을 변경, 모습이 변하게 하는 효과들.(element의 모습을 바꿀 수 있다.)

```css
 <style>
	img{
		border:5px solid black;
		border-radius:50%;
		50%면 원이 된다.
		transform: rotateY(85deg) rotateX(20deg) rotateZ(10deg);
		scale(2, 2); //2배씩 늘리기
		translateX(-1000px); //pixel만큼 옮기기
	}
</style>
```
* 다양한 transition, transform을 연습해보는 사이트를 방문해서 다양한 것을 경험해보자
[Transition 연습](https://matthewlein.com/tools/ceaser)  
[Transformation 연습](https://developer.mozilla.org/en-US/docs/Web/CSS/transform)

<br/>
<br/>

## Animation
```css
 <style>
	@keyframes superSexyCoinFlip{
		from{
			transform:rotateX(0);
		}
		to{
			transform:rotateX(360deg);
		}
	}
	img{
		border:5px solid black;
		border-radius:50%;
		animation:superSexyCoinFlip 5s ease-in-out infinite;
	}
</style>
```

### form-to 대신에 % 쓰기
* 2단계 이상이 필요할때 
```css
<style>
	@keyframes superSexyCoinFlip{
		0%{
			transform:rotateX(0);
		}
		50%{ 
			transform:rotateX(180deg) translate(100px);
		}
		100%{
			transform:rotateY(0);
		}
	}
	img{
		border:5px solid black;
		border-radius:50%;
		animation:superSexyCoinFlip 5s ease-in-out infinite;
	}
</style>
```
