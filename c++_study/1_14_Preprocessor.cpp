#include <iostream>
#include <algorithm>
using namespace std;
//실제프로그램에선 매크로로 array 설정을 하지 않는다.
//매크로 define 은 다음것을 만나면 오른쪽으로 대체해라!
#define MY_NUMBER 333 //매크로라고도 부름 대문자로 쓴다.
#define MAX(a,b) (((a)>(b)) ? (a):(b))

//매크로가 빈칸일 경우는???
#define LIKE_APPLE //이 파일 안에서만 적용이 된다.
void doSomething();
int main()
{
	//매크로를 많이 쓰지는 않는다.
	cout << MY_NUMBER << endl;
	cout << MAX(1+3, 2) << endl;
	cout << max(1 + 3, 2) << endl;
	
	//LIKE_APPLE이 정의 되어있으면 실행해라 !

	doSomething(); //이 파일안에서만 LIKE_APPLE 정의가 되어있다.
				//dosomething의 정의는 딴 파일에 있기 문에
				//LIKE_APPLE이 정의가 안되어있음.
	return 0;
}