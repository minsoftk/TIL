![bash](C:\Users\kkwan_000\Desktop\test.png)

  

### DarkBlue 색상 안나오게 바꾸기

* 최근에 windows 10 Store Ubuntu를 설치했습니다. 근데 DarkBlue 색상이 터미널에서 잘 안보이더라구요. 그래서 이 색상을 바꾸려고 웹 서핑을 해봤습니다.     

  



* 생각보다 복잡하게 생각하실 수도 있지만 엄청 간단합니다! 차근차근 따라와주세요!

* 먼저 .bashrc 파일을 편집을 해줍니다. 아래 명령어를 따라 쳐주세요.

  

```bash
vim ~/.bashrc
```

치신 뒤, 맨 마지막 줄에 아래 Text들을 추가해서 붙여넣기 해주세요.  




```bash
LS_COLORS='rs=0:di=1;35:ln=01;36:mh=00:pi=40;33:so=01;35:do=01;35:bd=40;33;01:cd=40;33;01:or=40;31;01:su=37;41:sg=30;43:ca=30;41:tw=30;42:ow=34;42:st=37;44:ex=01;32:*.tar=01;31:*.tgz=01;31:*.arj=01;31:*.taz=01;31:*.lzh=01;31:*.lzma=01;31:*.tlz=01;31:*.txz=01;31:*.zip=01;31:*.z=01;31:*.Z=01;31:*.dz=01;31:*.gz=01;31:*.lz=01;31:*.xz=01;31:*.bz2=01;31:*.bz=01;31:*.tbz=01;31:*.tbz2=01;31:*.tz=01;31:*.deb=01;31:*.rpm=01;31:*.jar=01;31:*.war=01;31:*.ear=01;31:*.sar=01;31:*.rar=01;31:*.ace=01;31:*.zoo=01;31:*.cpio=01;31:*.7z=01;31:*.rz=01;31:*.jpg=01;35:*.jpeg=01;35:*.gif=01;35:*.bmp=01;35:*.pbm=01;35:*.pgm=01;35:*.ppm=01;35:*.tga=01;35:*.xbm=01;35:*.xpm=01;35:*.tif=01;35:*.tiff=01;35:*.png=01;35:*.svg=01;35:*.svgz=01;35:*.mng=01;35:*.pcx=01;35:*.mov=01;35:*.mpg=01;35:*.mpeg=01;35:*.m2v=01;35:*.mkv=01;35:*.webm=01;35:*.ogm=01;35:*.mp4=01;35:*.m4v=01;35:*.mp4v=01;35:*.vob=01;35:*.qt=01;35:*.nuv=01;35:*.wmv=01;35:*.asf=01;35:*.rm=01;35:*.rmvb=01;35:*.flc=01;35:*.avi=01;35:*.fli=01;35:*.flv=01;35:*.gl=01;35:*.dl=01;35:*.xcf=01;35:*.xwd=01;35:*.yuv=01;35:*.cgm=01;35:*.emf=01;35:*.axv=01;35:*.anx=01;35:*.ogv=01;35:*.ogx=01;35:*.aac=00;36:*.au=00;36:*.flac=00;36:*.mid=00;36:*.midi=00;36:*.mka=00;36:*.mp3=00;36:*.mpc=00;36:*.ogg=00;36:*.ra=00;36:*.wav=00;36:*.axa=00;36:*.oga=00;36:*.spx=00;36:*.xspf=00;36:';

export LS_COLORS

PS1=’\e[37;1m\u@\e[35m\W\e[0m\$ ‘
```



  

완료하셨으면 변경된 소스를 실행시켜 줍니다! 아래 명령어를 쳐주세요!

```bash
source ~/.bashrc  
```

  

  ![test1](C:\Users\kkwan_000\Desktop\test1.png)

* 이제 눈에 잘띄는 색상으로 변경이 완료됐습니다  

  



#### 참고

> 백스페이스를 누를 때 짜증나는 벨 소리 비활성화

```bash
echo “set background=dark” >> .vimrc
```

  

  

  

reference:

https://medium.com/@iraklis/fixing-dark-blue-colors-on-windows-10-ubuntu-bash-c6b009f8b97c