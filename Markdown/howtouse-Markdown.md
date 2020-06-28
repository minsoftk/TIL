#참고 [GitHub Guides - Mastering Markdown](https://guides.github.com/features/mastering-markdown/)


# Syntax Guide 

## **Bold**(강조) , *italic*(이탤릭체)
```
예시
It's very easy to make some words **bold** and other words *italic* with Markdown. 
You can even [link to Google!](http://google.com)
```
-------------------------------------------------------------------------------------------------------------
Markdown이 적용되면 아래와 같다. <br>
* It's very easy to make some words **bold** and other words *italic* with Markdown. You can even [link to Google!](http://google.com)

<br>
<br>

## Header
```
Example
# This is an <h1> tag
## This is an <h2> tag
###### This is an <h6> tag
```
-------------------------------------
* #을 하나씩 더 붙일수록 글자 크기가 작아진다.

<br>


## 강조
```
Example
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

## 이미지 삽입
```
![GitHub Logo](/images/logo.png)

```
----------------------
* 형식: ![표현할 글자](Link 시킬 url or path)


<br>

## 웹 페이지 링크
```
[GitHub](http://github.com)
```
-------------------------------
* 형식: ![표현할 글자](Link 시킬 Url


<br>

## Blockquotes
```
As Kanye West said:

> We're living the future so
> the present is our past.
```
As Kanye West said:

> We're living the future so
> the present is our past.
-------------------------------
* '>'를 사용해서 블럭화를 할 수 있다.

## Inline code
```
I think you should use an
`<addr>` element here instead.
```
--------------------------------
* I think you should use an
`원하는 부분만을 코드화할 수 있다.` element here instead.

## Syntax highlighting 
```ruby
require 'redcarpet'
markdown = Redcarpet.new("Hello World!")
puts markdown.to_html
```
---------------------------------------
* code를 묶을때  ```ruby로 적어준다.
