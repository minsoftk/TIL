#include <iostream>
#include <vector>
using namespace std;
namespace a
{
	int my_var(10);
	int my_a(123);
	int count(123123);
	//네임스페이스의 변수가 다르면 상관이 없지만
	//같은 네임스페이스를 불러왔을때 겹치면 사용에 문제가 생긴다.
}
namespace b
{
	int my_var(20);
	int my_b(456);
}
int main()
{
	using namespace a;
	using namespace b;
	
	cout << my_a << endl;
	cout << my_b << endl;
	//이럴땐 문제가 없다
	//만약 이름이 같은데 네임스페이스가 다를때는?

	cout << a::my_var << endl;
	cout << b::my_var << endl;

	//block으로 처리하는 방법도 있다.
	{
		using namespace b;
		{
			using namespace a;
			cout << my_var << endl; //a와 b 둘의 영향을 다 받는다
		}
		cout << my_var << endl;
	}


	//각각의 블록으로 묶어준다. 
	//헤더의 using namespace를 전체에 넣는것은 좋지 않다
	//전역에 쓰는 것은 피하는 것이 좋다.
}

//만약 a에 있는 count를 cout할 때 std와 겹치게 된다.
//그럴때 현명하게 어떤 네임스페이스를 선택해서 사용할 것인지
//선택해야한다.