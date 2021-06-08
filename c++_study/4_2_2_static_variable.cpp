#include <iostream>
using namespace std;
int g_a = 1;

void doSomething()
{
	//int g_a = 1; //이것은 블록을 나가면 사라짐
	//static int a = 1;	 //변수 a가 OS로부터
						//받은 메모리가 static.
						//초기화를 한번만 하고 
						//같은 메모리를 쓴다.
	//2번 함수가 실행이 될때 변수 a를 재사용한다.
	//하지만 초기화가 처음에는 무조건 되야한다.
	++g_a;
	cout << g_a << endl; 
}

int main() 
{
	int a = 10;//전역변수와 헷갈릴 가능성

	doSomething();
	doSomething();
	doSomething();
	doSomething();

	cout << a + 1 << endl;
}

//Linking: 연결한다.

//Linkage: 연결 그자체를 의미한다.
