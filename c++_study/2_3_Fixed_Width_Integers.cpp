#include <iostream> //iostream에서 cstdint를 include 함
#include <cstdint>

int main()
{
	using namespace std;

	std::int16_t i(5);
	std::int8_t myint = 65; //char가 나옴 오류가 생길수도 있음

	std::int_fast8_t fi(5);
	std::int_least64_t fl(5);

}
//멀티플랫폼에서 많이 쓰임