> 틀린 내용이 있다면 댓글로 알려주세요! 감사합니다 :)

<br/>

# 함수들에 공부하기 전 사전지식

* 함수들에 공부하기에 앞서 **`파일디스크립터`**라는 개념을 먼저 이해하고 있으면 좋다.



## 파일 디스크립터(File Descriptor)란?

리눅스와 유닉스에서는 시스템을 전부 파일로 처리하여 관리한다. (하드웨어 등 모든 장치도 포함)

시스템에서 프로세스가 파일에 접근하기 위한 방법으로 파일 디스크립터(FIle Descriptor)라는 핸들이 필요하다.

해당 파일을 open할때( 해당파일에 접근할 때 ) 파일 디스크립터는 0부터 N까지 즉, 음수가 아닌 0부터 차례대로 숫자를 부여받으며, 0, 1, 2는 프로세스가 메모리에서 실행을 시작할때 기본적으로 할당되는 파일 디스크립터이다.



<br/><br/>



###  **기본적으로 할당받는 파일 디스크립터**

> ﻿ 0번 : 표준 입력(Standard Input)   / STDIN_FILENO
>
>  1번 : 표준 출력(Standard Output)  / STDOUT_FILENO
>
>  2번 : 표준 에러(Standard Error)   / STDERR_FILENO﻿



그러므로 우리가 생성하는 파일 디스크립터들은 3번 부터 차례대로 할당받게된다. 쉽게 생각하면, 파일 디스크립터는 파일을 다루기 위해서 해당파일의 주소를 참조하여 접근하는 형태라고 생각하면 된다.



이 fd를 활용해서 파일을 읽을수가 있다. 바로 read, open, close 함수를 이용하는 것이다.

<br/>

<br/>

---

<br/><br/>

# 💡 open함수에 대하여

<br/>

* `fcntl.h` 헤더에 포함 되어 있는 함수

<br/>



## Prototype

```c
size_t open(const char *pathname, int flags);
```

* `pathname` : 파일의 경로와 이름으로, 절대경로의 파일명과 상대경로의 파일명 모두 허용.

* `flags` : 파일을 어떻게 열지를 결정하는 플래그, 읽기전용으로 열때는 O_RDONLY, 쓰기 전용으로 열때는 O_WRONLY, 읽기 쓰기로 열고싶을때는 O_RDWR을 사용한다.

  

  

  <br/>

## Return Value 

* 성공적으로 파일을 열게 되면 파일 디스크립터를 반환한다. 그렇지 않으면 음수를 반환한다. open이 제대로 되었는지 확인하기 위해서는 int형 변수를 하나 선언해준 후, open의 결과값이 0 미만인지 확인한다.

<br/>

<br/>

---

<br/><br/>

# 💡 close함수에 대하여

<br/>

* `unistd.h` 헤더에 포함 되어 있는 함수

<br/>



## Prototype

```c
size_t close(int fd);
```

* `fd` : open하고 있는 프로세스를 닫을 fd를 인자로 받는다.

  

  

  <br/>

## Return Value 

* 정상적으로 close했다면 0을, 실패했다면 -1을 반환한다.

<br/><br/>

---

<br/><br/>



# 💡 read 에 대하여

<br/>

* `unistd.h` 헤더에 포함 되어 있는 함수

<br/>



## Prototype

```c
size_t read (int fd, void *buf, size_t nbytes)
```

* `fd` : 파일 디스크립터

* `buf` : 파일을 읽어 들일 버퍼 

* `nbytes` : 버퍼의 크기

  

  <br/>

## Return Value 

* 정상적으로 실행되었다면 읽어들인 **`바이트 수`**를, 실패했다면 `-1`을 반환한다.

<br/>



## read 함수의 예제

* 예제에 사용될 test.txt의 내용

```
#test.txt
12345
ABCDE
abcde
67890
```



```c
#include <stdio.h>         // puts()에 필요한 헤더
#include <string.h>        // strlen() 
#include <fcntl.h>         // O_WRONLY , open함수를 쓰기 위한 헤더
#include <unistd.h>        // write(), close()

#define  BUFF_SIZE   1024

int main()
{
   char   buff[BUFF_SIZE];
   int    fd;

   if ( 0 < ( fd = open( "./test.txt", O_RDONLY)))
   {
      read( fd, buff, BUFF_SIZE);
      puts( buff);
      close( fd);
   }
   else
   {
      printf( "파일 열기에 실패했습니다.\n");
   }
   return 0;
}
```

* 위와 같이 실행이 된다면 결과는 아래와 같이 나온다.

<br/>

```bash
$ ./a.out
12345
ABCDE
abcde
67890
$
```



하지만 만약에 buff의 크기를 벗어나게 된다면, 여러번 읽기를 시도할 수 있다.

```c
#include <stdio.h>         // puts()에 필요한 헤더
#include <string.h>        // strlen()
#include <fcntl.h>         // O_WRONLY , open함수를 쓰기 위한 헤더
#include <unistd.h>        // write(), close()

#define  BUFF_SIZE   5     // 버퍼의 크기가 작습니다.

int main()
{
   char     buff[BUFF_SIZE];
   int      fd;
   size_t  rd_size;

   if ( 0 < ( fd = open( "./test.txt", O_RDONLY)))
   {
      while( 0 < ( rd_size = read( fd, buff, BUFF_SIZE-1)))   //  4 byte씩 읽씁니다.
      {
         buff[rd_size]  = '\0';      // puts()를 위해 NULL을 대입
         puts( buff);
      }
      close( fd);
   }
   else
   {
      printf( "파일 열기에 실패했습니다.\n");
   }
   return 0;
}
```

* puts함수에 대해서 궁금하다면 [여기를](https://modoocode.com/48) 참고하세요!

* 그러면 아래와 같이 4byte씩을 읽은 결과가 나오게 됩니다.

  <br/>

```bash
$ ./a.out
1234
5
AB
CDE

abcd
e
67
890
$
```





<br/><br/><br/>



### 📕 reference : 

* [파일디스크립터에 대하여](https://go-it.tistory.com/3)

* [open함수에 대하여](https://www.it-note.kr/19)
* [open함수 헤더와 자세한 함수 설명](http://forum.falinux.com/zbxe/index.php?document_srl=408448&mid=C_LIB)
* [puts함수에 대하여](https://modoocode.com/48)
* [open,read,close 함수](https://mong9data.tistory.com/111)

