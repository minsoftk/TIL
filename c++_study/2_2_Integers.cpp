#include <iostream>
#include <cmath>
#include <limits> //short 타입의 가장 큰숫자가 무엇인가를
				//알려주는 함수를 포함하는 라이브러리
int main() {
	using namespace std;

	short		s = 1;
	int			i = 1;
	long		l = 1;
	long long	ll = 1;

	
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;
	cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;
	
	cout << std::numeric_limits<short>::max() << endl;
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;

	s = 32767;
	s = s + 1;	//	32768(++s, s++)

	cout << "32768?" <<s << endl; 
	//-라고 나오는것은 overflow현상
	cout << "Interger의 overflow 확인" << endl;

	cout << std::numeric_limits<int>::max() << endl;
	cout << std::numeric_limits<int>::min() << endl;
	i = numeric_limits<int>::max();
	cout << i << endl;
	i += 1;
	cout << i<<endl;

	cout << "Unsigned int의 overflow 확인" << endl;

	cout << std::numeric_limits<unsigned int>::max() << endl;
	cout << std::numeric_limits<unsigned int>::min() << endl;
	unsigned int k = numeric_limits<unsigned int>::max();
	cout << k << endl;
	k += 1;
	cout << k << endl;



	return 0;
}