#include <iostream>
#include "My_const.h"
void printNumber(const int my_number)//보통 const로 파라미터 수정을 방지
{
	using namespace std;
	cout << my_number << endl;
}


int main()
{
	using namespace std;
	printNumber(123);
	float pi = 3.14f; //f를 쓰지 않으면 double로 인식
						//되어서 float형인 pi에 들어감
				//l 은 long double
				//LU , LL , UL
				//거의 대부분은 f나 l을 쓴다.

	int i = 12345u; //u 가 unsigned 를 의미
		//unsigned를 명확히 하고 싶을때는 casting으로 해결
	unsigned int n = 5u;
	long n2 = 5L;
	double d = 6.0e-10;
	
	int x = 012;	//앞에 0을붙이면 8진수라는 의미.
					//16진수는 0xF
					//2진수는 0b1010;
	cout << x << endl;

	//리터럴 상수를 코드에 넣어두는 경우가 있다
	int num_items=123;
	int price = num_items * 10;//10 is ....
	//주석이 필요없게 하려면 매직넘버를 없애야한다.
	const int price_per_item = 10;//요런식으로 상수를 변수로 바꾼다.
	//int price=num_items * price_per_item;
	


	///////////////Symbloic 상수/////////////////
	const double gravity{ 9.8 };
	//double const gravity 상관없으나 보통 앞에 붙인다.
	//초기화를 해줘야한다.


	const int my_const(123);

	int number;
	cin >> number;
	const int special_number(number);//runtime에 결정되기 문에
	//constexpr을 쓸 수가 없음

	//compile time과 runtime의 차이를 구분하는 키워드 등장
	//constexpr int my_const(123) -> compile의 time의 값이 완전히 결정되는 상수라는걸 체크하겠다.

	

	int num_item = 123;
	int price = num_item * 30;
	//c++에서 상수를 대체하기위해서 매크로를 절대 쓰지않는다.
	//이유 2가지
	//1.debugging이 힘들다.
	//2.define은 c++전체에 영향을 미치므로 잘 쓰지 榜쨈
	//const 상수를 만드는게 더 바람직하다.
	
	double radius;
	cin >> radius;

	double circumference = 2.0 * radius * constants::pi;

	return 0;