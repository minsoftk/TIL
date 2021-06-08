/*
	This is my program
	Written by me
*/


//1.3 변수와의 만나
#include <iostream>
int main() {
	int x = 2;
	x = 123; //assignment operator 

	//같다라는 의미가 아니다 
	//x라는 변수 이름이 가르키고 있는 메모리 공간에 
	//123이라는 값을 저장을 해놓는다.

	std::cout << x << std::endl;
	std::cout << &x << std::endl;
	//& amperand (앤드라고도 읽는다)
	//붙이면 컴퓨터 내부의 메모리의 주소를 나타내줌

	//L value 란 : 주소를 갖고 있는게 L 밸류 ex) x 변수
	//R value 란 : 임시로 잠깐 저장되는 숫자 자체의 대한 
	//				주소를 가져오기는 어려움
	//				값자체를 의미...?
	
	


//Debug mode vs Release mode
	//디버그모드는 디버기모드를 할 수 있는것
	//릴리즈는 사용자에게 실제로 배포하는 모드
	//x에 변수를 입력하지 않았을때 런타임에러가 뜸
	
	
	int y = 123; //initialization
	//int y(123); //이렇게 쓸 수도 있음

	y = 5;	//assignment
	

	//쓰레기값이 생기는 이유는 변수가 사용하는 메모리공간에서
	//전에 사용되었던 프로그램에서 데이터를 넣었다 뺏다가 무엇이
	//남아있는지 잘 모른다.
	return 0;
}