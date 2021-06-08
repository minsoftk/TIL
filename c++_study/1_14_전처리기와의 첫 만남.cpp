#include <iostream>
void doSomething()
{
using namespace std;

#ifdef LIKE_APPLE
	cout << "Apple" << endl;
#endif

	//LIKE_APPLE이 정의 되어있지 않으면 실행해라!
#ifndef LIKE_APPLE
	cout << "Orange" << endl;
#endif

}