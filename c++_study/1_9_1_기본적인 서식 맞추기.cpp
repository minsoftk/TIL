#include "stdafx.h"
#include <iostream>

using namespace std;

int add(int x, int y) 
{
	return x + y; //tab으로 띄어서 쓰는걸 indenting이라 함
}

int main()
{
	cout << "Hello, world" <<"abcdef"<<
		"Hello home" <<endl;
	//빈칸 인식안함. 


	//하드코딩 : 프로그래머가 코드에서 변수값을 리터럴같이 
	//			고정된값으로 직접	대입하는 방식 
	//소프트코딩: 프로그램 실행중에 사용자의 입력이나 외부파일
	//			인터넷 통신 등으로 데이터를 가져 오는 방식.

	//this is important
	int my_v		= 1;

	//this is important too.
	int x			= 4;


	int num_apples	= 123;

	return 0;
}