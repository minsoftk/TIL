#include <iostream>
extern int a=4; //초기화를 안해서 메모리 할당이 안되면
				//extern 해도 링크에러가 남 
void doSomething() 
{
	using namespace std;
	cout << "Hello" << endl;
}