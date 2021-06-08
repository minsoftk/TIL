#include <iostream>
using namespace std;
//#1
int value = 123;

int main()
{
	//내부연결 외부연결
	using namespace std;
	cout << value << endl;
	
	//#1
	int value = 1;
	cout << ::value << endl; //전역변수를 끌고 오는 global 
							//scope operator
	cout << value << endl;
	//#1


	return 0;
}