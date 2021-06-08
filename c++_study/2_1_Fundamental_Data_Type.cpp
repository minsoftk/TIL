#include <iostream>

int main()
{
	//char
	//char16_t:1bytes
	//char32_t:2bytes
	//wchar_t: 4bytes

	//signed char : at least 8bits
	//signed short int:2bytes
	//signed int :2 bytes
	//signed long int :4bytes
	//signned long long int : 8bytes

	//unsigned char
	//unsigned short int
	//unsigned int
	//unsigned long int
	//unsigned long long int 

	using namespace std;

	bool bvalue = false;
	cout << (bvalue ? 1 : 0 )<< endl;
	char  chValue = 65;

	cout <<  chValue << endl;
	float fValue = 3.141592f; //f를 빼면 doule로 인식
							//더 정밀도가 넣은걸 낮은거에다
							//붙여넣으니 짤릴수도 있으니 warning이 뜬다
	double dValue = 3.141592;
	cout << fValue << endl;
	cout << dValue << endl;

	//modern c++에선 auto가 생겼다.
	auto aValue = 3.141592;
	cout << aValue<<endl; //double로 자동으로 결정이 됨
	auto aValue2 = 3.141592f;
	cout << aValue2 << endl; //float 로 자동으로 인식

	cout << sizeof(aValue) << endl;//메모리에 얼마나 공간을 차지하는지 알려줌
	cout << sizeof(aValue2) << endl;//타입을 넣어도되고 변수를 넣어도된다.


	int b = 123;//copy initialization
	int a(123);//direct intialization
	int c{ 123 };//uniform intialization  ->조금 더 엄격
	//객체지향이란건 데이터타입을 만들어 쓰는것!
	//direct , uniform 
	//객체지향에서 직접만든 데이터타입을 초기화하는 방법
	//int i=(int)3.1415 -> casting (형변환)

	//여러개의 변수를 동시에 선언하는 법
	//최근에는 사용할 변수는 사용하기 직전에 선언을 하는 스타일
	//로 바뀌고 있음 ->debugging 하기가 좋기 때문에!

	return 0;
}