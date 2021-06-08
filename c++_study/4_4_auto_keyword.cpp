#include <iostream>

auto add(int x, int y) //parameter에는 왜 auto가 안되는가?
					   //추론해달라는 이야기가 아니라
					   //다양한 입력을 해달라는것과는 의미가 다르다.
					   //auto대신에 템플릿을 사용하게 된다.
{
	return x +(double) y;
}
auto add(double x, double y) -> int //트레일링
{
	return x + y;
}

int main()
{
	using namespace std;
	auto a = 123; //초기화 하지 않으면 auto를 사용할 수 없음.
	auto d = 123.0f;
	auto c = 1 + 2.0;
	auto result = add(1, 2);
	


	return 0;
}