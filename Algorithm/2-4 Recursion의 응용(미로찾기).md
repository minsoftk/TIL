# Recursive Thinking
 
### 미로가 있을 때 현재 위치에서 출구까지 가는 경로가 있으려면?
* 1) 현재 위치가 출구이거나 혹은
* 2) 이웃한 셀들 중 하나에서 출구까지 가는 경로가 있거나


```ruby
boolean findPath(x,y)
if (x,y) is the exit
return true;
else
for each neighbouring cell (x’,y’) of (x,y) do
if (x’,y’) is a pathway cell
if findPath(x’,y’)
return true;
return false;
```  
  
    

### 현재 위치에서 이미 가본 곳을 다시 지나지 않고 출구까지 가는 경로가 있으려면
* 1) 현재 위치가 출구이거나 혹은
* 2) 이웃한 셀들 중 하나에서 이미 가본 곳을 다시 지나지 않고 출구까지 가는 경로가 있거나

```ruby
boolean findPath(x,y)
    if (x,y) is either on the wall or a visited cell
        return false;       
    else if (x,y) is the exit
        return true;
    else
        mark (x,y) as a visited cell;
    for each neighbouring cell (x’,y’) of (x,y) do
        if findPath(x’,y’)
            return true;
    return false;
```
```ruby
이런식으로 visited 와 blocked를 표시해준다.
#define PATHWAY_COLOUR 0 // white
#define WALL_COLOUR 1 // blue
#define BLOCKED_COLOUR 2 // red
#define PATH_COLOUR 3 // green
```