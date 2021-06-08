#include <iostream>
using namespace std;

void dosomething(int x)
{
	x = 123;
	cout << x << endl;
}
int main()
{
	int x = 0;
	cout << x << endl;
	dosomething(x);
	cout << x << endl;
	
	return 0;
}
//function이 중가로{ } 역할을 할뿐이다. 
//1_7 내용의 중요한것은 이것. 함수가 {} 역할을
//할뿐이다.