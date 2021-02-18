> 틀린 내용이 있다면 댓글로 알려주세요! 감사합니다 :)





# 💡 putchar_fd 에 대하여

<br/>

## 환경

* <unistd.h> 를 사용한다.

<br/>

## Prototype

```c
void ft_putchar_fd(char c, int fd);
```

* `c`  : 출력할 문자.

* `fd` :  쓰여질 파일디스크립터.

  

  

  <br/>


## Return Value 

* 문자 `c`를 주어진 파일디스크립터로 출력.
* return 값은 없다.

<br/>



## putchar_fd 함수의 구현

```c
#include <unistd.h> //write를 쓰기 위한 헤더
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
```



> unistd.h 는 윈도우에서 사용하려면?

* 리눅스에서 사용하는 컴파일러가 필요하기 때문에 윈도우에서는 사용이 어려울 수 있다. [이곳](https://m.blog.naver.com/PostView.nhn?blogId=gkswogml23&logNo=220979239918&proxyReferer=https:%2F%2Fwww.google.com%2F) 포스트를 확인하면 자세한 방법과 설치를 확인할 수 있다. 
* 만약 vscode를 이용한다면 [이곳](https://webnautes.tistory.com/1158) 포스트를 확인하면 굉장히 자세하게 설치 방법을 알 수 있다.

<br/> <br/>







------



<br/><br/>



# 💡 putstr_fd에 대하여  

<br/>

## 환경 



* 문자열에 각각의 문자마다 함수 `f`를 적용한다.


<br/>







## Prototype

```c
void ft_putstr_fd(char *s, int fd);
```

* `s` :  출력할 문자열.

* `d` : 쓰여질 파일디스크립터.

  

  


<br/>



## Return Value 

*  문자열 's'을 주어진 파일디스크립터로 출력.

* return 값은 없다.

  

  <br/>




## putstr_fd 함수의 구현

```c
#include <unistd.h> //동적할당 malloc을 쓰기 위한 헤더
void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
}
```

> unistd.h 는 윈도우에서 사용하려면?

* 리눅스에서 사용하는 컴파일러가 필요하기 때문에 윈도우에서는 사용이 어려울 수 있다. [이곳](https://m.blog.naver.com/PostView.nhn?blogId=gkswogml23&logNo=220979239918&proxyReferer=https:%2F%2Fwww.google.com%2F) 포스트를 확인하면 자세한 방법과 설치를 확인할 수 있다. 
* 만약 vscode를 이용한다면 [이곳](https://webnautes.tistory.com/1158) 포스트를 확인하면 굉장히 자세하게 설치 방법을 알 수 있다.

<br/><br/>





# 💡 putendl_fd 에 대하여

<br/>

## 환경



<br/>

## Prototype

```c
void ft_putchar_fd(char c, int fd);
```

* `c`  : 출력할 문자.

* `fd` :  쓰여질 파일디스크립터.

  

  

  <br/>


## Return Value 

* 문자열 's'을 주어진 파일디스크립터로 출력하고 newline으로 끝내기.
* return 값은 없다.

<br/>



## putendl_fd 함수의 구현

```c
#include <unistd.h> //malloc을 쓰기위한 헤더
void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		write(fd, "\n", 1);
	}
}
```





<br/><br/>

# 💡 putnbr_fd 에 대하여

<br/>

## 환경



<br/>

## Prototype

```c
void ft_putnbr_fd(int n, int fd);
```

* `n`  : 출력할 정수.

* `fd` :  쓰여질 파일디스크립터.

  

  

  <br/>


## Return Value 

* 문자 `c`를 주어진 파일디스크립터로 출력.
* return 값은 없다.

<br/>



## putnbr_fd 함수의 구현

```c
#include <stdlib.h> //malloc을 쓰기위한 헤더
void	ft_putnbr_fd(int n, int fd)
{
	long	temp;
	int		i;
	char	num[15];

	temp = (long)n;
	if (n < 0)
		temp = temp * -1;
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if(n < 0)
		write(fd, "-", 1);
	i = 0;
	while (temp)
	{
		num[i++] = ((temp % 10) + '0');
		temp /= 10;
	}
	while (--i >= 0)
		write(fd, num + i, 1);
}

```





<br/><br/>



reference :

<br/><br/>

* [](https://studymake.tistory.com/385)
* [vscode](ttps://webnautes.tistory.com/1158)

