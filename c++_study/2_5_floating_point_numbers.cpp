//부동소수점 수

#include <iostream>
#include <iomanip>
#include <limits>

int main()
{
	using namespace std;

	float f;
	double d;
	long double ld;

	cout << sizeof(f) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(ld) << endl;

	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl;

	//표현하는 숫자의 범위를 볼때는 min이 아니라 lowest로 확인해야함
	
	cout << 3.14 << endl;
	cout << 31.4e-1 << endl;
	cout << 31.4e-2 << endl;
	cout << 31.4e1 << endl;
	cout << 31.4e2 << endl;

	//e는 10의 ~~ 승과 같다. 3.14e2 =3.14 * 10^2

	////////////중요한 오류 알아두기///////////////
	cout << endl << "--- 중요한 오류 ---" << endl;
	cout << 1.0 / 3.0 << endl;
	
	cout << std::setprecision(16) << endl; //몇자리수까지 출력할것인가?
	cout << 1.0 / 3.0 << endl;

	float g(123456789.0f); //10 significant digits
	cout << std::setprecision(9);
	cout << g  << endl;

	// 1.0 출력과 0.1+0.1~~~~ 과 오차가 난다.
	//컴퓨터가 완젼 똑똑하지는 않다.
	//오차가 누적이 되는점 알고있기.
	
	double zero = 0.0;
	double posinf = 5.0 / zero;
	double nginf = -5.0 / zero;
	double nan = zero / zero;
	cout << posinf << endl;
	cout << nginf<< endl;
	cout << nan	<< endl;

	cout << endl << endl;
	cout << "현재 변수가 갖고있는 값이 inf 인지 nan인지"
		"확인하는 방법!" << endl;
	//inf 인피니트 
	cout << posinf<<" " <<std::isnan(posinf) <<endl;
	cout << nginf << " " << std::isnan(nginf)<<endl;
	cout << nan << " " << std::isnan(nan) << endl;
	cout << 1.0 << " " << std::isnan(1.0) << endl;

	cout << posinf << " " << std::isinf(posinf) << endl;
	cout << nginf << " " << std::isinf(nginf) << endl;
	cout << nan << " " << std::isinf(nan) << endl;
	cout << 1.0 << " " << std::isinf(1.0) << endl;




}