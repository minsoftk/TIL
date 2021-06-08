#include <iostream>
#include <typeinfo>
#include <iomanip>
int main()
{
	using namespace std;
	int a = (int)123.0; //명시적 형변환


	//numeric conversion
	float b = 1.0f;
	double d = a; //더 넓은 메모리를 사용하기 때문에 
				  //상관이 없다.
	short s = 2;  //하지만 double d가 short로 갈때는 
				  //문제가 생길 수 도 있다.
	cout << typeid(a).name() << endl;

	//numeric conversion

	int i = 30000;
	char c = i;

	cout << static_cast<int>(c) << endl;//명시적 형변환
			//c++ 스타일 형변환
	

	float f = 3.14;
	int z = f;
	cout << std::setprecision(12) << z << endl;
	//버리고 표현해준다. floor ceil 과 다르다.
	//암시적 형변환을 할때는 소수점을 잘라서 넣어준다.


	cout << 5u - 10; //unsigned
	//이상한 값이 나온다. 

	//우선순위(정수형인데 int보다 사이즈가 작은 것들은 바껴진다)
	//int < unsigned int < long < unsigned long <long long
	// < unsigned long long < float < double < long double
	//c++ style
	int j = int(4.0);
	//c style
	int k = (int)4.0;

	//최근에는
	int l = static_cast<int>(4.0);
	
	return 0;
}