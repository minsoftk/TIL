#include <iostream>

int main()
{
	using namespace std;

	bool b1 = true; //copy intialization
	bool b2(false); //direct intailization
	bool b3{ true };//uniform intialization
	b3 = false;

	cout << std::boolalpha; //true false 로 출력하게 함
	//cout << std::noboolalpha; //0 과 1로 출력하게 함
	cout << b3 << endl;
	cout << b1 << endl;

	cout << !true << endl;
	cout << !false << endl;
	 
	if (3 > 1)
	{
		cout << "This is true" << endl;
		cout << "True second line" << endl;
	}
	else
	{
		cout << "This is false" << endl;
	}

	return 0;
}