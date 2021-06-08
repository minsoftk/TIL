#pragma once


//#ifndef MY_ADD 
//#define MY_ADD

int add(int a, int b)
{
	return a + b;
}

//원래는 declaration, definition 이 원래 .h 와 .cpp로
//나뉘는게 맞지만 헤더가드인 pragma once가 있으면
//.h에 다 선언과 정의 다 해도 상관이 없음.

//#endif