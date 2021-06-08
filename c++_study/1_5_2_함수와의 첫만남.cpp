#include <iostream>

using namespace std;

void print() {
	cout << "Hello" << endl;
}

int addTwoNumbers(int num1, int num2) {
	return num1 + num2;
}


int main() {

	cout << addTwoNumbers(10, 30) << endl;
	
}

//void 함수에서는 return;을 써줄 수도 있다.
//void는 return이 없다.

//함수안에 함수가 선언이 되지않는다. class는 가능
//argument :전달인자
//addTwoNumbers의 함수사용의 10 과 30 이 argument
//parametersms 는 addTwoNumbers 함수에 int num1,int num2 