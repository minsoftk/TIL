#include <iostream>
#include "1_12_dosomething.h"

//1_12_dosomething에서 add를 include 해줬지만
//현재 cpp에서 add를 또 include 해야할 경우가 있다.
//#include "1_12_add.h"


using namespace std;


int main()
{
	doSomething();
	return 0;
}