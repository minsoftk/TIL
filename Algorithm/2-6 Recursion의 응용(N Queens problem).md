# N-Queens

* N X N 체스보드에 N개의 말을 높는데 단, 어떤 두 말도 동일한 행이나 열이나 대각선 상에 오지 않게 n개의 말을 놓을 수 있는가?

![01](https://github.com/MinsoftK/TIL/blob/master/Algorithm/image/2-n_queens_01.png?raw=true)


<br>
<br>

* 백트래킹, 실행하다가 실패하면 다시 돌아가서 실행하는 것인데 이런 것을 가시적으로 보기 위해서 상태공간트리를 활용한다.   

<br><br>

## 상태공간트리 
![02](https://github.com/MinsoftK/TIL/blob/master/Algorithm/image/2-n_queens_02.png?raw=true)

* 상태공간트리란 해를 포함하는 트리.
즉 해가 존재한다면 그것은 반드시 이 트리의 어떤 한 노드에 해당함
따라서 이 트리를 체계적으로 탐색하면 해를 구할 수 있음
* 우리가 찾는 노드가 있다면 상태공간트리에 무조건 존재한다.
* 상태공간 트리의 모든 노드를 탐색해야 하는 것은 아님. ex)2,1 에서의 노드를 볼 필요가 없음. 해가 되기 위한 조건을 위반했기 때문에
=> 이 노드는 infeasible 하다.

<br><br><br>

![02](https://github.com/MinsoftK/TIL/blob/master/Algorithm/image/2-n_queens_03.png?raw=true)

* 깊이우선탐색이란 상태공간 트리를 깊이 우선 방식으로 탐색하여 해를 찾는 알고리즘을 말한다.
* Stack, Recursion을 이용해서 BackTracking을 구현하는 방법이 있다. 



## Design Recursion  

```java
return-type queens( arguments ) //매개변수는 내가 현재 트리의 어떤 노드에 있는지
를 지정해야 한다.

{
    if non-promising
        report failure and return;
    else if success
        report answer and return;
    else
        visit children recursively;
}
```
