#include <iostream>
#include <cmath> //차이를 알게하기 위한 헤더 include
using namespace std;
int add(int a, int b)
{
	return a + b;
}


int main()
{
	int x = 1, y=2;
	int v = add(x, ++y); //do not use 
	//						컴파일러마다 다를수가 있기에
	
	cout << v << endl;





	/////////////////3_4_sizeof,comma operator
	cout << endl << endl << endl;
	cout << "3_4 sizeof, comma operator part" << endl << endl;


	sizeof(float);
	//sizeof(a); 변수가 들어가도 된다.

	cout << sizeof(float);//sizeof는 함수가 아니라 operator다.
	//변수명이 들어갈때는 괄호가 없어도 작동한다.
	//sizeof a;  이런식으로
	x = 3, y = 10;
	int z = (++x, ++y);//comma 연산자는 뒤에것이(++y) 들어간다.
	cout << x << " " << y << " " << z << endl;
	//반복문에서는 comma operator를 많이 사용함
	// z = x, y  로 하면 (z=x 연산자 우선순위로 먼저 되어버림)
	


	////////////////////////조건연산자/////////////////
	//conditional operator
	//(arithmetic if)라고 불리기도 함.
	bool onSale = true;
	const int price= (onSale == true) ? 10 : 100;
	/*int price; 
	if (onSale)
		price = 100;
	else
		price = 100;
	*/
	cout << price << endl;
	

	/////////////////////3_5_관계연산자
	////
	cout << endl << endl << endl;
	cout << "3_5 관계연산자 part" << endl << endl;
	if (x == y)
		cout << "equal" << endl;
	if (x != y)
		cout << "33.0  Not equal " << endl;
	if (x > y)
		cout << "x is greater than y" << endl;
	if (x < y)
		cout << " x is less than y" << endl;
	if (x >= y)
		cout << "x is greater than y or equal to y" << endl;
	if (x <= y)
		cout << "x is less than or equal to y" << endl;
	

	using namespace std;

	double d1(100 - 99.99);
	double d2(10 - 9.99);

	cout << d1 << endl;
	cout << d2 << endl;

	cout << abs(d1 - d2) << endl;
	//차이가 많이 나진 않지만 차이가 확실히 있긴 있다.
	//컴퓨터가 똑똑하지 않기 때문에


	if (d1 == d2)
		cout << "equal" << endl;
	else
	{
		cout << "Not equal" << endl;
		//같지않다는 경우가 출력이 된다.
		if (d1 > d2) cout << "d1>d2" << endl;
		else
			cout << "d1<d2" << endl;
	}
		
///////오차가 이정도로 나면 완전히 같진않아도 같다고 봤으면
///////좋겠다 라고 설정 하는 방법!!! 오차의 한계를 미리 정의
	const double epsilon = 1e-16;
	if (std::abs(d1 - d2 < epsilon))
		cout << "Approximately euqal" << endl;
	else
		cout << "Not equal" << endl;
		




	return 0;
}


/////////////////3_2_산술연산자//////////
/////////////////3_3_증감연산자

