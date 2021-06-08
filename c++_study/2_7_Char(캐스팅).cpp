#include <iostream>

int main()
{
	using namespace std;
	char c1(65);
	char c2('A');


	//c++ style 초기화와 비슷하다. 
	cout << int(c1) << " " << int(c2) << endl; 
	
	//c-style casting 
	cout << (int)c1 << " " << (int)c2 << endl;

	cout << static_cast<char>(65) << endl;
	cout << static_cast<int >('A') << endl;
	



	cout << endl << endl;
	char c3(65);
	cout << sizeof(char) << endl;
	cout << (int)std::numeric_limits<unsigned char>::max() << endl;
	cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;
	

	cout << "This is first line" << std::flush;//버퍼에 있는것을 다 쏟아내라
	
	wchar_t c6;
	char16_t c4;
	char32_t c5;
	//새로운 내용들

	
	return 0;
}