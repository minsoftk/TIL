#include <iostream>
using namespace std;

int main()
{
	//영역을 분리해주는 역할
	int x = 0;
	cout << x << " " << &x << endl;
	{
		//다른 메모리에 대한 식별자1
		int x = 1;
		cout << x << " " << &x << endl;
	}//지역변수는 영역을 벗어나면 
	//사용할 수 없게 된다.
	//지역변수가 차지하고 있던 메모리는 그 지역 변수가
  	//영역을 벗어날  스택 메모리로 반납된ㄷ.
	//반납된 메모리는 다음 지역 변수가 사용할 수 있도록
	//대기한다.


	{
		//다른 메모리에 대한 식별자2
		int x = 2;
		cout << x << " " << &x << endl;
	}

	//int x = 0;
	//int x(0); 도 가능



	return 0;
}