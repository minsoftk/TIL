# Libft

> 자주 사용되는 함수들을 재정의해서 나만의 C라이브러리 만들기.

<br/>

### 1. 프로젝트 소개

42SEOUL에서는 이미 정의되어 있는 표준 함수들을 사용해 프로젝트를 진행하는 것이 금지되어 있다. 필요하다고 생각되는 함수라면 직접 구현해 사용해야 한다. 이 프로젝트를 통해 유용한 C 표준 함수들을 재구현하면서 함수의 작동 원리와 사용법, 그리고 C언어에서 데이터와 그에 필요한 메모리를 어떻게 효율적으로 관리하고 다룰 수 있는지 배울 수 있었다. 

<br/>



### 2. 함수 리스트

이 라이브러리의 함수들은 크게 세 가지 파트로 나눌 수 있다.

`part1`은 C 표준 라이브러리인 `Libc`의 함수들.

`part2`는 문자열을 다루는 유용한 함수들.

`part3`는 리스트를 다루는 유용한 함수들.



<br/>

#### Part 1. Libc functions

첫 번째 파트에서는, man에 정의되어 있는 대로 libc functions의 set을 재구현했다. 함수들은 원본과 같은 형식의 프로토타입을 선언한다. 함수의 이름 앞에는 `ft_`를 붙였다.

예를 들어 `strlen`은 -> `ft_strlen`.

아래의 함수들을 구현했다. 이 함수들은 외부 함수들을 필요로 하지 않는다.

> memset • bzero • memcpy • memccpy • memmove • memchr • memcmp • strlen • strlcpy • strlcat • strchr • strrchr • strnstr • strncmp • atoi • isalpha • isdigit • isalnum • isascii • isprint • toupper • tolower

그리고 아래의 함수들은 `malloc`함수를 사용하여 재구현 했다.

> calloc • strdup  



#### Part 2. Additional functions

두 번째 파트에서는, libc에 포함되있지 않거나 다른 형식으로 포함된 functions의 set을 재구현했다. 이 함수 중 일부는 구현 시 part1의 함수를 사용했다.

> substr • strjoin • strtrim • split • itoa • strmapi • putchar_fd • putstr_fd • putendl_fd • putnbr_fd  



#### Part 3. List functions

메모리와 문자열을 다루는 함수를 사용하는 것도 편리하지만, 실제 프로젝트를 진행할 때는 리스트를 다루는 함수가 훨씬 필요했다.

리스트의 요소들은 다음의 구조를 갖는다. 이 구조를 libft.h 파일에 추가했다.

```
typedef struct    s_list 
{ 
    void          *content; 
    struct s_list *next; 
}                 t_list;
```

아래의 함수들을 구현해 라이브러리에 추가했다.

> ft_lstnew • ft_lstadd_front • ft_lstsize • ft_lstlast • ft_lstadd_back • ft_lstdelone • ft_lstclear • ft_lstiter • ft_lstmap



<br/>

### 📕reference :



* [이곳의](https://github.com/hidaehyunlee/Libft) 내용을 참고해서 재작성했습니다.