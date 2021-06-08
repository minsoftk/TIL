void MyFunction()
{

}
void GetNumber() //함수명이 길어질때 
				//주석자체를 달아버리기
{
	//동사 + 명사
	//소문자를 쓰는 경우도 많아지고 있다.
	//getNumber

	//함수명 오른쪽 누르고 rename을 이용해
	//다 바꿀수도 있다.
}

class MyClass
{
public:
	int m_variable;
};



int main()
{
	//변수명은 숫자로 시작하지 않음
	//세미콜론을 쓸수 없음 
	//예약어들은 쓸 수 없다.
	int n_apples, n_oranges;
	//변수명에 빈칸이 있으면 안된다.
	//int number_of_apples;
	//->int n_apples 로 줄이기
	
	//대문자는 변수명으로 잘 쓰지 않는다.
	//-> 번거롭기 때문에

	int VALUE; 
	//변수명을 대문자로 쓰지 않는다.
	//예전에는 변수명의 자동완성을 쓸 수 있기 때문에
	//외울 필요도 없고 방식이 많이 달라지고 있다.

	GetNumber();

	return 0;
}