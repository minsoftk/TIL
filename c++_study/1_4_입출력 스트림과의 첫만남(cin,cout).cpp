#include <iostream>
#include <cstdio>
int main()
{
	int x = 1024;
	std::cout << "I love this lecture!";// << std::endl;
	std::cout << "x is " << x << std::endl;


	std::cout << "abc" << "\t" << "def" << std::endl;
	std::cout << "ab" << "\t" << "cdef" << std::endl;
	// \t 는 글자를 쓰고 빈공간을 두고 줄마춤을 원할때 이용한다
	//구구단 출력 등등
	//\t는 한글자처럼 처리가 된다.

	//\n 은 new 라인을 의미.

	std::cout << "\a" << std::endl;
	//소리 출력을 시켜줌.
	
	printf("I love this lecture!\n");

	using namespace std;
	int x1=1;

	cout << "Befor your unput, x was " << x1 << endl;

	cin >> x1;

	cout << "Your input is " << x1 << endl;








	return 0;
}