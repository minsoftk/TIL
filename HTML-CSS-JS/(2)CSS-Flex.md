# 2-5. Flex
* Inline Block 사용시 블록이 늘어날때 밑으로 내려가는 문제점이 있었다. 이것을 해결하기 위해 flex를 사용.
* 오로지 부모클래스에만 적용한다.

```ruby
<style>
.father{
  display: flex;
  justify-content:center;
  align-items:center; 로도 가능하다
  //flex-direction: column //column-reverse
  //flex-wrap: no wrap
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
> father의 flex를 지워버리면 block이 되버리고 flex 사용시 .box에 inline block이라고 적지 않아도 inline block이 된다.
> justify-content:center; 라 쓰면 가운데 정렬 flex가 적용된다. 수평으로 적용한다.
> justify-content:center;
> align-items:center; 로도 가능하다. align item은 수직으로 적용한다.
> align-item:flex-end or start;  
> justify-content: space between; 컨텐츠가 같은 간격으로 조정이 된다.
> justify-content: space around : 컨텐츠 뿐만 아니라 그 주변도 같은 간격으로 조정이 된다.

> flex-direction 방향이 row 이면 justify는 수평으로, align은 수직으로 적용이 된다.
> flex-direction 방향이 column 이면 justify는 수직으로, align은 수평으로 적용이 된다.
> flex는 부모박스에만 적용을 한다. 

>flex-wrap: no wrap (default)
>폭은 무시하고 다 줄어드는 것이다. wrap으로 하면 화면을 줄여도 폭은 그대로 유지해주지만 컨텐츠를 밑으로 내려준다.


```ruby
<style>
.father{
  display: flex;
  justify-content:center;
  align-items:center; 로도 가능하다
  flex-direction: row-reverse
  //flex-wrap: wrap-reverse
 .box{
  background-color :red;
  width: 200px;
  height: 200px;
  margin-right: 7.3px;
  justify-contents:center;
  align-items=:center;
  }
</style>
  <div class="father">
    <div class="box"></div>
  </div>
```
> no-wrap-reverse 도 쓸 수 있다.
* 직접 실험을 해보면서 이런 것도 사용이 가능하구나를 느껴야 한다.
* 부모 컨테이너를 플렉스로 선언하면, 그안에 종속된 칠드런 박스들을 움직일 수 있다. 그래서 각각의 박스에 명령을 적용할 필요가 없다.

## 2-6. CSS Selector and Pseudo Selectors
* Pseudo Selector(가상 셀렉터) : 셀렉터인데 element가 아닌 것
```ruby
<style>
  input[type="submit"]{
  background-color: red;
  }
 
