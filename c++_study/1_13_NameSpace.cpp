#include <iostream>
//
namespace Myspace1
{
	namespace Innerspace
	{
		int my_function() 
		{
			return 0;
		}
	}
	int doSomething(int a, int b)
	{
		return a + b;
	}
}
namespace Myspace2
{
	int doSomething(int a, int b)
	{
		return a * b;
	}
}

using namespace std;
int main()
{
	Myspace1::Innerspace::my_function(); //스페이스안의 스페이스
	using namespace Myspace1::Innerspace;//쓰면 doSomething의 함수는
							//myspace1의 함수가 된다.
	
	my_function();
	
	//cout << Myspace1::doSomething(3, 4) << endl;
	//cout << Mysapce2::doSomething(3,4) << endl;
	return 0;
}