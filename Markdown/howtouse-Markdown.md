
* [GitHub Guides - Mastering Markdown](https://guides.github.com/features/mastering-markdown/) 영어가 가능하다면 공식사이트에 가서 문법을 직접 확인해보길 바란다. 굉장히 자세하게 기술한다. 대부분은 이 글을 읽고 예시를 가져와서 정리했다. 
* 본인은 문법을 바로 익힐 수 있게 적어 놓았기 때문에 HTML과 연관시켜서 tag로 이해를 하고 싶다면 [Markdowm 사용법 총정리](https://heropy.blog/2017/09/30/markdown/)를 참고하길 바란다.

<br><br>

# Markdown 사용법 

## 1. **Bold**(강조) , *italic*(이탤릭체) 
```cpp
예시
**You** can even [link to Google!](http://google.com)
              [표시할 글귀] (링크할 사이트의 URL)
```
-------------------------------------------------------------------------------------------------------------
Markdown이 적용되면 아래와 같다. <br>
* **You** can even [link to Google!](http://google.com)

<br>
<br>

## 2. Header
```
예시
# This is an <h1> tag
## This is an <h2> tag
###### This is an <h6> tag
```
-------------------------------------
* #을 하나씩 더 붙일수록 글자 크기가 작아진다.
* 제목, 부제, 내용 이런식으로 문단 나누는 것이 상당히 간편해진다. 

<br>
<br>
<br>


## 3. 강조
```
예시
*This text will be italic*
_This will also be italic_

**This text will be bold**
__This will also be bold__

_You **can** combine them_
```
----------------------------------
* >*This text will be italic*
  >_This will also be italic_

  >**This text will be bold**
  >__This will also be bold__

  >_You **can** combine them_



<br>
<br>
<br>


## 4. 이미지 삽입
```
예시
![GitHub Logo](/images/logo.png)

```
----------------------
* 형식: ![표현할 글자](Link 시킬 url or path)

<br>
<br>

<br>

## 웹 페이지 링크
```
예시
[GitHub](http://github.com)
```
-------------------------------
* 형식: ![표현할 글자](Link 시킬 Url)

<br>
<br>

<br>

## 5. Blockquotes
```
예시
As Kanye West said:

> We're living the future so
> the present is our past.
```
As Kanye West said:

> We're living the future so
> the present is our past.
-------------------------------
* '>'를 사용해서 블럭화를 할 수 있다.


<br>
<br>
<br>

## 6. Inline code
```
예시
I think you should use an
`<addr>` element here instead.
```
--------------------------------
* I think you should use an
`원하는 부분만을 inline 코드화할 수 있다.` element here instead.

<br>
<br>
<br>


## 7. Syntax highlighting 
```ruby
예시
require 'redcarpet'
markdown = Redcarpet.new("Hello World!")
puts markdown.to_html
```
---------------------------------------
* code를 묶을때  ```ruby로 적어준다. 
* 만약 사용하는 코드가 javascript라면 ```javascript 라고 적어준다.

<br>
<br>
<br>


## 8. 테이블 만들기 (Table)
#### (+2020-07-24 추가)  
  

shift + \ 키를 눌르면 |(파이프)가 생성이 되는데 이를 이용하여 테이블을 작성한다. 코드 작성은 아래와 같이 만들어주면 된다. -(하이픈)으로 구분된 곳 각각 왼쪽, 양쪽, 오른쪽에 :(세미콜론)을 붙일 경우 순서대로 왼쪽 정렬, 가운데 정렬, 오른쪽 정렬이 가능하다.

```
|영화제목 | 주연 | 감독 |
|:----------|:----------:|----------:|
| 더테러라이브 |  하정우  | 김병우 |
```

* 위와 같은 표는 다음과 같이 나타난다.  

| 영화제목 | 주연 | 감독 |
|:----------|:----------:|----------:|
| 더테러라이브 |  하정우  | 김병우 |

<br>
<br>
<br>


## 9. 이모지 추가하기 
#### (+2020-07-24 추가)
>https://velog.io/@yuuuye/velog-%EB%A7%88%ED%81%AC%EB%8B%A4%EC%9A%B4MarkDown-%EC%9E%91%EC%84%B1%EB%B2%95
> 요 사이트에서 얻은 지식인데 작성할 때 더욱 풍부하게 md 파일 작성이 가능해져서 유용한 것 같다.  
  


작성된 글 중간중간에 보이는 이모지는 트위터 이모지입니다.
https://kr.piliapp.com/twitter-symbols/
아래 주소의 트위터 이모지를 복사 ➜ 붙여넣기 해서 사용하시면 됩니다..
  
    

단축키
window10: 윈도우 키 + 마침표(.)
mac: Command + Control + 스페이스 바
  
    
## 😁👍

<br>
<br>
<br>

## 10. 글자 색상 변경
#### (+2020-07-24 추가)
기본적으로 문법에서 지원하지 않기 때문에 HTML 태그를 써야한다.
마크다운 작성 시
```html
<span style="color:red">red</span>
<span style="color:#d3d3d3">#d3d3d3</span>
<span style="color:rgb(245, 235, 13)">rgb(245, 235, 13)</span>
```

결과  
  

<span style="color:red">red</span>
<span style="color:#d3d3d3">#d3d3d3</span>
<span style="color:rgb(245, 235, 13)">rgb(245, 235, 13)</span>

<br>
<br>
<br>



## 11. 가운데 정렬 
#### (+2020-07-27 추가)
마크다운은 가운데 정렬만 지원하는데 HTML tag인 ```<center></center>```을 활용한다.
```html
<center> 정렬할 컨텐츠 안으로 삽입 </center>
```

<center> 가운데 정렬! 쨘! </center>

<br>
<br>
<br>


