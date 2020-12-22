## 환경

* c, c++



## 목적

* ```memset``` 함수는 어떤 메모리의 시작점부터 연속된 범위를 어떤 값으로(바이트 단위) 모두 지정하고 싶을때 사용하는 함수이다.

```c
void *memset(void *dest, int value, size_t count);
```

* ```dest``` : 채우고자 하는 메모리의 시작 포인터(시작 주소)
* ```value``` : 메모리에 채우고자 하는 값, ```int```형 이지만 내부에서는 ```unsigned char```(1 byte)로 변환되어서 저장된다.
* ```count``` : 채우고자 하는 바이트의 수. 즉, 채우고자 하는 메모리의 크기



## return value 

* memset()함수는 dest에 대한 포인터를 return 합니다. 

  ```
  #include <string.h> // string.h 파일이 필요합니다.
  #include <stdio.h>
  
  int main (){
  
      char a[20];
  
      // 1바이트마다 모두 65로 초기화
      // 배열을 채울 때는 sizeof()함수를 사용하면 됩니다.
      // sizeof 함수 - 배열의 전체 바이트 크기를 반환합니다.
      memset(a, 65, sizeof(a));
  
      // 출력을 통해 확인
      for(int i=0; i< (sizeof(a)/sizeof(char)); i++){
          printf("%c\n",a[i]);
      }
  
  }
  
  // 즉, char라는 배열의 값을 모두 65인 'A'로 채워주게 됩니다.
  // memset에서 dest라는 배열의 주소값을 return 받습니다. 따라서 for문을 통해
  // a 배열의 출력을 확인할 수 있습니다.
  ```



## memset 함수의 구현

```c

```



1byte 기준으로 사용되는 함수이기에 char형만 들어가는 것 같습니다. 4byte가 들어가는 경우도 예외처리를 해줘야하는건지 모르겠지만 sizeof(char)가 1보다 클 때, 예외처리를 해주도록 했습니다.

int형의 사이즈인 4byte를 처리해주는 것이  궁금하신 분들은 [요기](https://msparkms.tistory.com/entry/4Byte-Memset-%EA%B5%AC%ED%98%84)를 참고해보세요! 

어셈블리어가 나와버려서 저는 스킵을 했습니다.....ㅠㅠ

## memset 함수를 사용하는 이유?

처음에는 memset 함수를 왜 사용하는지 이해가 잘 안갔습니다. 계속 읽다보니깐 쓰는 이유가 있긴한데, 속도측면에서 for문보다 우월하다고 합니다. 따라서 만약 초기화해야하는 배열의 크기가 엄청 크다면 for문보다는 빠른 속도로 초기화를 시킬수가 있겠네요.



[Quora](https://www.quora.com/What-makes-memset-so-fast) 와 [stackoverflow](https://stackoverflow.com/questions/7367677/is-memset-more-efficient-than-for-loop-in-c)의 질문 답변을 참고하시길 바랍니다. 

시간복잡도에 따른 차이라고 설명과 PC의 설계까지 접근을 하는데

저한테는 너무 어렵군요..ㅎㅎ 







reference : 

[TWpower's Tech blog](twpower.github.io/79-usage-of-memset-function) 의 memset 내용을 참조했습니다. 