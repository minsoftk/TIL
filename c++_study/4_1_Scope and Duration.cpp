#include <iostream>

//블럭을 벗어나면 액세스를 할 수 없기 때문에 
//이름을 붙여준다 
namespace work1::work11
{
		int a = 1;
		void doSomething()
		{
			a += 3;
		}
}

namespace work2
{
	int a = 1;
	void doSomething() 
	{
		a += 5;
	}
}
int main() 
{
	using namespace std;

	work1::work11::a;
	work1::work11::doSomething(); //3개까지는 잘 안쓴다.

	work2::a;
	work2::doSomething();

	return 0;
}