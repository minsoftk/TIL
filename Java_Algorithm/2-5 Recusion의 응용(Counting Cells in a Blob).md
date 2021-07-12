> 인프런에서 강의를 하고 계신 [부경대학교 IT융합응용공학과 권오흠 교수님의 알고리즘 배우기 강좌](https://www.inflearn.com/course/%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-%EA%B0%95%EC%A2%8C/dashboard) 해당 강의 내용을 정리해서 올렸습니다. 정확한 강의 내용은 영상에서 확인해주세요! <br>

<br>


# Counting Cells in a Blob

* 입력으로 하나의 바이너리 이미지가 주어진다. 재귀함수를 이용해 image pixel을 세는 알고리즘. blob이란 픽셀들의 집합을 의미한다.

![01](https://github.com/MinsoftK/TIL/blob/master/Algorithm/image/2-counting_cell_01.png?raw=true)
* Binary 이미지 
* 각 픽셀은 background pixel이거
나 혹은 image pixel
서로 연결된 image pixel들의 집
합을 blob이라고 부름 
* 상하좌우 및 대각방향으로도 연결
된 것으로 간주  



![02](https://github.com/MinsoftK/TIL/blob/master/Algorithm/image/2-counting_cell_02.png?raw=true)

* 총 4개의 Blob을 가지고 있다.



![03](https://github.com/MinsoftK/TIL/blob/master/Algorithm/image/2-counting_cell_03.png?raw=true)


* 현재 픽셀이 이 속한 blob의 크기를 카운트하려면
* 현재 픽셀이 image color가 아니라면
0을 반환한다
* 현재 픽셀이 image color라면 먼저 현재 픽셀을 카운트한다 (count=1).
* 현재 픽셀이 중복 카운트되는 것을 방지하기 위해 다른 색으로 칠한다.
* 현재 픽셀에 이웃한 모든 픽셀들에 대해서 그 픽셀이 속한 blob의 크기를 카운트하여 카운터에 더해준다. 
* 카운터를 반환한다.

인접한 8개의 픽셀 각각에 대해서 순서대로 그 픽셀이 포함된 blob의 크기를 count
한다.  
북, 북동, 동, 동남,… 이런 순서로 고려한다.  
북쪽 픽셀이 포함된 blob의 크기는
0이다. 따라서 count값은 변화없다.  
북동쪽 픽셀이 속한 blob을 count하
고, count된 픽셀들을 색칠한다.


* Code 

```java
private static int BACKGROUND_COLOR=0;
private static int IMAGE_COLOR=1;
private static int ALREADY_COUNTED=2;
public int countCells(int x, int y){
    if(x<0 || x>=N || y<0 || y >=N )
        return 0;
    else if( grid[x][y] != IMAGE_COLOR )
        return 0;
    else{
        grid[x][y] = ALREADY_COUNTED;
        return 1 + countCells(x-1, y+1) + countCells(x, y+1)
            +countCells(x+1, y+1) + countCells(x-1, y)+countCells(x, y) 
            +countCells(x+1, y) + countCells(x-1, y-1) + countCells(x, y-1)
            +countCells(x+1, y-1)
    }
}

```