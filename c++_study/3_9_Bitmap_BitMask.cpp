#include <iostream>
#include <bitset>
using namespace std;
int main()
{
	//flag1,2,3,4,5 .... true false를 
	//bit로 기억할 수 있다.
	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;
	cout << bitset<8>(opt0) << endl;
	cout << bitset<8>(opt1) << endl;
	cout << bitset<8>(opt2) << endl;
	cout << bitset<8>(opt3) << endl;

	unsigned char items_flag = 0;
	cout << bitset<8>(items_flag) << endl;

	//item0 on
	items_flag |= opt0;
	cout << "Item0 obtained" << bitset<8>(items_flag) << endl;

	//item2 on
	items_flag |= opt2;
	cout << "Item2 obtained" << bitset<8>(items_flag) << endl;

	//item3 on
	items_flag |= opt3;
	cout << "Item3 obtained" << bitset<8>(items_flag) << endl;


	//item3 lose
	items_flag &= ~opt3;
	cout << "Item3 lose" << bitset<8>(items_flag) << endl;

	// item1 을 가지고 있는가?
	if (items_flag & opt1)
	{
		cout << "Has item1" << endl;
	}
	cout << (items_flag & opt1);
	//obtain item 2,3
	items_flag |= (opt2 | opt3);
	cout << bitset<8>(opt2 | opt3) << endl;

	cout << "Item2,3 obtained " << bitset<8>(items_flag) << endl;


	if ((items_flag & opt2) && !(items_flag & opt1))
	{
		//^ 는 상태를 바꿔줌
		items_flag ^= opt2;
		items_flag ^= opt1;
	}

	 cout << bitset<8>(items_flag) << endl;
	;

}

/*
*/