#include <iostream>
using namespace std;


//static int g_a = 1; //internal Linkage란
					//이 안에서만 쓸 수 있다.
					//static은 다른 cpp에서 쓸 수 없게 만듬.
					//external

					
//forward declaration
//main 컴파일할때 어딘가에는 dosomething이 존재하니
//extern 생략
extern void doSomething();
extern int a;
int main()
{
	//int a = 10;//전역변수와 헷갈릴 가능성

	doSomething();
	doSomething();
	doSomething();
	doSomething();
	cout << a << endl;
}

//Linking: 연결한다.

//Linkage: 연결 그자체를 의미한다.