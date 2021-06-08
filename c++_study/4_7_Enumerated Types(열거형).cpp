#include <iostream>
#include <typeinfo>
#include <string>
enum Color //user -defined data types
{
	COLOR_BLACK = -3 ,  // -3이라고 설정하면 -3에서부터 +1이 되면서 올라간다.
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN, // , 있어도 되고 없어도 된다. 사용자의 다음 추가를 위해 편의를 생각해서 설정해 놓은 것!! 
	COLOR_SKYBLUE,
	BLUE // 만약 COLOR을 쓰지 않았을때 Feeling이랑 겹친다. 이것을 해결하기 위한 enum class가 17에서 나왔다. 
};

enum Feeling
{
	HAPPY,
	JOY,
	MAD,
};

int computeDamage(int weapon_id)
{
	if (weapon_id == 0) //sword
	{
		return 1;
	}
	if (weapon_id == 1) //hammer
	{
		return 2;
	}

	//사용자가 우리들이 정해놓은 아이템의 번호를 외우기가 힘들기 때문에 사용을 하면서 실수가 많이 발생한다. 그래서 더욱 편하게 기호로 표현하기 위해서 열거형을 사용한다.
}

int main()
{
	using namespace std;
	Color paint = COLOR_BLACK; //열거형에서 BLACK으로 정의를 한다.
	Color house(COLOR_BLUE);
	Color apple{COLOR_RED};
	//다른 initalization과 달리 uniform intialization은 특성이 조금 다르다. 
	//주의해야할 점을 class 초기화에서 자세하게 알아보자 !! 

	cout << paint<< " " << COLOR_RED; //-3에서부터 -2로 증가하는 것을 알 수 있다.
	//하지만 int 형의 사용으로는 막아놨다. 
	int color_id = COLOR_RED;

	Color my_color = 3; //이렇게 집어넣는것은 오류가 난다. 애초에 int를 쓰지 않기 위해 만든 것이기 때문에
	Color my_color = static_cast<Color>(3); //열거형의 캐스팅은 가능하다. 
	//cin>>my_color;

	int in_number;
	cin >> in_number;
	if (in_number == 0) my_color =COLOR_BLACK; //이렇게 우회시켜서 my_color에 넣을 수도 있다.

	/*string str_input;
	getline(cin, str_input);
	if (str_input == "COLOR_BLACK")
		my_color = static_cast<Color>(0);
	*/ //권장되지 않는 방법 사람들이 실수를 할 수 밖에 없기 때문에

	return 0;
}