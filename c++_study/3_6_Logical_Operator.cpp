#include <iostream>

int main()
{
	using namespace std;

	bool x = true;
	bool y = false;

	cout << (x && y) << endl;
	 //short circuit evaluation
	int w = 2;
	int z = 2;
	if (w == 1 && z++ == 2) //왼쪽을 계산하고 true면
							//오른쪽을 계산하고 false면
							//오른쪽을 계산하지 않는다.
	{
		//do something
		
	}
	cout << z << endl;

	x = true;
	y = false;
	//De Morgan's Law
	//두개는 같다.
	!(x || y);
	!x && !y;
	//XOR 같으면 

	bool v1 = true;
	bool v2= false;
	bool v3 = false;

	bool r1 = v1 || v2 && v3;
	bool r2 = (v1 || v2) && v3;
	bool r3 = v1 || (v2 && v3);
	//logical or가 and보다 우선순위가 높다!!!!!!!!!!		
	cout << r1 << endl;
	cout << r2 << endl;
	cout << r3 << endl;



	return 0;
}