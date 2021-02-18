> 2020.12.28 sudo 내용 추가
>
> 2021.01.05 이미지와 내용 보강

  <br/>


# Ubuntu 백스페이스 소리 없애기

-   윈도우 10에서 우분투를 다운 받으셨는데 소리가 굉장히 거슬려서 해결해봤습니다..
    
-   만약 리눅스 명령어를 아직 잘 모르신다면 구글링하시면서 따라해보시길 바랍니다.
    
    ```bash
    vim ~/.inputrc  #.input를 생성한다.
    ```
    
    ```
    set bell-style none
    ```
    
    
    
    `~/.inputrc`를 만들어서 `set bell-style none`을 내용으로 추가해주는 것입니다.
    
    `set bell-style none`내용을 추가하신 뒤에 :wq로 저장합니다. 그 다음 아래의 명령어를 실행해줍니다.
    
    
    
    <br/><br/>
    
    

```
  source ~/.inputrc
```

그리고 이 명령을 실행하시고 소리가 안난다면 더이상 다른 작업은 필요 없으실겁니다.

하지만 저는 효과가 없었습니다. 그 이유를 찾아보니 `/etc/inputrc`가 존재한다면 사용자계정의 경로인 `~/.inputrc`의 경로의 파일은 무시된다고 하더군요. 그에 해당하는 질의 글은 [여기서](https://qastack.kr/programming/36724209/disable-beep-of-linux-bash-on-windows-10) 확인하실 수 있습니다.



<br/><br/><br/><br/>

[##_Image|kage@bMCiSW/btqSmBB3IAu/D1Av5s3xQZ2wznLVidXwKk/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|||_##]

그러나 `/etc/inputrc`에서 주석처리 돼 있는 `set bell-style none`을 수정하려 했는데 수정이 안되더군요 그 이유를 보니 ReadOnly로 설정이 돼 있어서 권한이 필요했습니다. 그래서 sudo로 실행을 하시면 됩니다.

```
sudo vim /etc/inputrc 
```

<br/><br/><br/><br/>

[##_Image|kage@bv76Tp/btqSELbX37p/OfVekfatkmv72aXoZ3duxk/img.png|alignCenter|data-origin-width="0" data-origin-height="0" data-ke-mobilestyle="widthContent"|||_##]

`set bell-style none` 주석인 #을 제거해줬습니다.   



> set bell-style visible 까지 활성화를 시켜야 저는 소리가 꺼졌습니다. 정확히 어떤 기능인지는 모르겠으나 혹시 bell-style none을 활성화시켜도 소리가 난다면 bell-style visible도 활성화 시켜주세요!



<br/><br/><br/>

  

>   vim에서도 beep를 없앨려면 ?

> 현재 내가 사용하는 리눅스는 ubuntu LTS 18.04 이다. 
>
> /etc/inputrc 파일을 열어보면 set bell-style none 이라는 라인이 주석처리 되어있을 것이다. 이 라인의 주석을 풀면 쉘 상에서 beep음이 사라진다. 라인이 없다면 추가해주자. 
>
> 서버 전체가 아니라 개인이 소리를 없애고 싶다면 ~/.inputrc에 추가해주면 될 듯하다. 그래도 vim에서는 beep음이 나게 되는데, .vimrc 파일에 set vb 를 추가해주면 beep음 대신 화면 깜박임으로 경고를 해주고, 깜박임도 싫다면 set vb t\_vb= 이라는 라인을 추가해주면된다.

  

<br/><br/>



**근데 여기서 문제** 저는 sudo를 써도 **계정 비밀번호**를 모른단 말입니다....

저는 계정비밀번호도 모르는데, root 비밀번호도 모르겠더라구요.... 계속 미로를 헤매는 느낌이였습니다 ㅠㅠ 그래서 root 비밀번호를 찾는 방법도 찾아봤습니다. 그랬더니 windows 보단 쉽더라구요 윈도우 환경이라서 가능한걸까요? 정확히는 모르겠네요

<br/>

  

**만약 root 계정의 비밀번호를 알고 계시다면 계정 비밀번호를 찾는 부분으로 넘어가주세요!**

<br/>

> (2020.12.28)
>
> 만약 root계정을 비밀번호를 처음 설정하는 것이라면 아래 명령어로 해결됩니다!



```
sudo passwd root
```

* 제가 test해본 결과 사용자계정으로 로그인시에 sudo를 쓰면 사용자계정의 password를 필요로해서 사용자 계정 비밀번호 설정까지 했습니다.

  

 <br/><br/>




---

  <br/>

## root 계정 비밀번호 초기화

<br/>

#### 초기화 시작 전 주의

> (2020.01.05) 내용 추가

* 이 글을 작성시에는 그냥 Ubuntu를 사용했었는데, 내 기억엔 비밀번호를 따로 설정한적이 없다. 그래서 기존의 Ubuntu를 기준으로 작성한 글이다. 현재는 Ubuntu 18.04버전이고 이 버전에서는 설치시 사용자의 비밀번호 설정을 하게 돼 있다. root 비밀번호는 설정이 안 돼있어서 `passwd root`로 설정을 바로 해줄 수 있다. 따라서 Ubuntu 18.04버전에서는 아래 명령어들이 동작을 안할 수도 있음을 참고!



-   1.  **우분투 기본 유저를 root 변경**
        
        **Windows 명령 프롬프트에서 명령어를 실행해주시면 됩니다.**
        

```
ubuntu.exe config --default-user root 
```

-   2.  **패스워드 변경**
        
        우분투를 종료했다가 다시 실행을 해주시면 root로 접속이 되는 것을 확인하실 수 있습니다.
        
        그러면 `passwd`로 비밀번호를 변경해줍시다.
        

```
passwd root //Ubuntu bash에서 실행을 해주시면 됩니다.
```

-   3.  **다시 우분투 기본 유저를 기존 사용자로 변경**
        
        변경을 하셨다면 다시 기존의 사용자 계정으로 설정해줍니다.
        

```
ubuntu.exe  config --default-user [사용자 계정 이름]
```

  

  <br/>


---

  <br/>

## 사용자 계정 비밀번호 초기화

<br/>



* **이렇게 root 계정의 비밀번호를 찾으셨다면** 아래 명령어로 root 계정으로 접근해주세요.

```
su root
```

```
vim /etc/shadow //비밀번호들이 저장 돼 있는 공간.
```

그러면 아래와 같이 콜론을 구분자로 사용하는 문장들이 들어있습니다.

 

* 아래의 예시를 보고 비밀번호를 초기화 해주세요!

```
minsoftk:$6$/sdfgdsg:
```

* 본인의 계정에 해당하는 내용의 비밀번호를 초기화 해준다. 예를 들어 나의 아이디가 minsoftk일때 아이디 다음의 ::(콜론과 콜론사이의 내용을 지워준다.)

* `$6$/sdfgdsg` 이부분을 지우면 비밀번호 설정을 초기화할 수 있다. 

  

  <br/>

  <br/>

> 구분자에 관련된 참고 내용

root : $6$FEE~YMS1 : 17240 : 0 : 99999 : 7 : : :

1 2 3 4 5 6 7 8

1) 사용자 이름

2) 패스워드 >> 해쉬처리되서 나온다 (단방향 처리기)

3) 패스워드 >> 패스워드 수정일 (기본 Date형식대로 처리된다(1970.01.01 이후 지난날))

4) 패스워드 변경 최소일 :

5) 패스워드 변경 최대일 : 이 기간 이후에는 비활성화로 된다.

6) 패스워드 변경 경고일 : 변경 최대일에서 경고일을 뺀 기간부터 경고메세지를 보낸다.

#> vi /etc/default/useradd 에서 default 값을 변경할 수 있다.

7) 비활성화 기간 : 패스워드 최대일이 지난후부터 비활성화 기간이다. 이 기간 이후에는 패스워드가 만료된다.

8) 계정 만료일자 : 1970년 1월 1일 ~ 부터 몇일 쨰 되는날 만료니깐 네이버 > 날짜 계산기를 열어놓는다.

: 계약직이나 학교에서 큰 서버를 쓰는경우에는 사용이 가능할 것 같다.

<br/>

<br/>



초기화를 해줬다면 다시 본래 계정으로 돌아가서 비밀번호를 바꿔줍니다.

```
su [본인의 계정]
passwd //암호설정
```

```
sudo vim /etc/inputrc // 이제 주석을 제거한 뒤 저장할 수 있다.
 //set bell-style none
 //set bell-style visible
 //주석들을 없애줘서 활성화 시켜주자
```

  

<br/><br/>




> 결론

-   이렇게 한 이유는 root계정으로 접근해서 적용을 하면 사용자 계정에도 적용이 되는줄 알았는데 적용이 되지 않았다. 그래서 사용자계정 비밀번호까지 초기화를 한 후, 변경해주었더니 소리가 나지 않았다. 리눅스 환경은 아직 초보자라 모르는 것이 많기에 틀린 내용이 있을 수 있으니 혹시 틀린 내용이 있다면 댓글로 알려주시면 감사하겠습니다 부족한 글 읽어주셔서 감사합니다.



<br/><br/><br/>

  


reference :

[Window에서 root 접속을 default로 바꾸기](https://thecodinglog.github.io/windows/linux/2018/05/30/reset-ubuntu-password-in-windows.html)

[shadow 형식에 관한 내용 : 장수궁뎅이](https://dgblog.tistory.com/117)

[Somnipathy](https://tanto.tistory.com/9)

