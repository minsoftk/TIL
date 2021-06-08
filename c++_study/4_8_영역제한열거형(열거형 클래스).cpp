#include <iostream>
enum class Color //c++ 11 에서 도입된 class 개념
{
	COLOR_BLACK = -3,  // -3이라고 설정하면 -3에서부터 +1이 되면서 올라간다.
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN, // , 있어도 되고 없어도 된다. 사용자의 다음 추가를 위해 편의를 생각해서 설정해 놓은 것!! 
	COLOR_SKYBLUE,
	BLUE // 만약 COLOR을 쓰지 않았을때 Feeling이랑 겹친다. 이것을 해결하기 위한 enum class가 17에서 나왔다. 
};

enum class Fruit
{
	BANANA,
	APPLE,
};

int main() 
{
	using namespace std;
	Color color1 = Color::COLOR_RED;
	Color color2 = Color::COLOR_BLACK;
	Fruit color2 = Fruit::BANANA;

	if (color == fruit) // 비교가 되지 않는다.
		cout << "Color is fruit? " << endl;

	//같은 클래스간의 비교는 가능하다.
	if (color1 == color2)
		cout << "Same color" << endl;
}