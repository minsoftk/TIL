#include <iostream>
#include <limits> //32767 을 대신 하기 위해서
	using namespace std;

int main() {
	//c++언어에서 기본적으로 제공해주는건 한 글자이다. 한 글자를 나열하는 방식으로 사용한다. 기본적으로 사용하는 방식이 char 이다. 여러가지 복잡한 작업들을 편하게 사용하기 위해 제공을 해주는 것이 string이다. 사용자 정의 자료형을 string이라고 한다.  string 헤더안에 기능들을 구현을 해놨기 때문에 사용할 수 있다. 

	//문자열 뒤에는 문자가 끝난다는 문자가 포함되어있다. 그래서 12글자이지만 13글자로 생긴다.
	const char my_star[] = "Hello, World";
	const string my_hello = "Hello, World";
	//const string my_hello("Hello, World");
	//const string my_hello{"Hello, World"};
	
	string my_ID = "123"; //" " 로 입력을 해줘야 함.
	cout << my_hello << endl;


	{
		cout << "Your name? : ";
		std::string name; //원래는 std가 붙어야함
		cin >> name;
		cout << "Your age ? :";
		//std::getline(std::cin, name)으로 해결이 가능함. getline이란 Enter칠때까지 라인을 입력을 받는다. 

		//만약에 
		/*
		int age;
		cout << "Your age ? :";
		cin>>age;
		
		std::cin.ignore(32767,'\n'); //'\n'을 만날때까지 32767개의 글자를 무시하고 날려버려라. magic number (마법의 숫자는 없는 편이 좋다.)
		//std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n'); 로 바꿔준다.  

		string name;
		cout << "Your name? : ";
		getline(cin, name); 
		*/
		//이 순서였을 경우에 1을 입력하고 엔터를 누르면 getline에서 엔터도 인식을 해서 넘어가버리기 때문에 문제가 된다. 

		string a("Hello ");
		string b("World");
		string res = a + b; //마치 산술연산하는 것처럼 기능을 구현할 수 있다.

		res += "I'm good";
		cout << res << endl;
		cout << res.length() << endl; //string 안에 있는 길이를 재는 함수를 이용.
	}

	return 0;
}