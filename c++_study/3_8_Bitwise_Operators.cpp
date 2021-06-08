#include <iostream>
#include <bitset> //새로 들어온 라이브러리
//내부적으로 비트가 어떻게 저장이되는지
int main()
{
	using namespace std;
	
	//<< left shift
	//>> 
	//~(not) , &, x, |, ^

	unsigned int a = 3;
	cout << std::bitset<4>(a)<< endl;
	
	unsigned int b = a << 1;
	cout << std::bitset<4>(b) << endl;
	// 이것이 어떤 의미가 있는가??
	cout << std::bitset<4>(b) <<" "<< b<< endl;//한비트만 옮겼을때
	b = a << 2;
	cout << std::bitset<4>(b) <<" "<<b << endl;//두비트만 옮겼을때
	//2의 몇제곱을 곱할때 계산량이 많을때 쉬프트를 많이 쓴다.
	
	//Right Shift 연산


	a = 1024;
	cout << std::bitset<16>(a) << endl;

	cout << std::bitset<16>(a >> 1) << " " << (a >> 1) << endl;
	// 이것이 어떤 의미가 있는가??
	cout << std::bitset<16>(a >> 2) << " " << (a >> 2) << endl;
	
	cout << std::bitset<16>(a >> 3) << " " << (a >> 3) << endl;


	//!a 는 logical not
	//bitwise not은 ~ 표시!


	a = 1024;
	cout << std::bitset<16>(~a) << endl;

	cout << std::bitset<16>(~a >> 1) << " " << (~a >> 1) << endl;
	// 이것이 어떤 의미가 있는가??
	cout << std::bitset<16>(~a >> 2) << " " << (~a >> 2) << endl;

	cout << std::bitset<16>(~a >> 3) << " " << (~a >> 3) << endl;

	// & 은 AND 연산
	// | 은 OR	연산
	// ^ 은 XOR 연산 (다르면 1 같으면 0)
	
	//Quiz 
	//0110>>2 -> decimal
	//5|12
	//5&12
	//5^12
	cout << "5" << " " << std::bitset<4>(5) << endl;
	cout << "12" << " " << std::bitset<4>(12) << endl;
	

	return 0;
}	