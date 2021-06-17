```html
<form action="friends.html" class="welcome-login">
		<input class="welcome-login__id" required type="text" placeholder="Email or phone number"/>
		<input class="welcome-login__password" required type="password" placeholder="Password"/>
		<input class="welcome-login__login" type="submit" value="Log in">
		<input class="welcome-login__signup" type="submit" value="Sign up">
		<a href="#">Find MinsTalk Account or Password</a>
</form>
```

* `action`은 정보를 보낼 위치를 의미한다. `method`는 2가지 방식 중 하나를 쓸 수 있다. 하나는 `POST` , `GET`이다. `POST`는 백엔드 서버에 정보를 전송하는 방식이다. 하지만 이 ![프로젝트]()에선 서버를 가지지 않는다. 그래서 `GET` 방식을 사용하는데 보안에 취약하다. 유저네임과 패스워드를 `GET`방식으로 보내면 안된다. url에 포함되어도 상관없는 정보들을 `GET`으로 보낸다. 

```css
nav>ul>li*4>a
```
* 이렇게 생성할 수 있다.
