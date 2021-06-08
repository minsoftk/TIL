//void 무치형
//return type이 없을때 void로 쓴다.
void my_function()
{

}

int main()
{
	int i = 123;
	float f = 123.456f;
	//void my_void; 
	//void tpye의 변수 선언 불가
					//void는 메모리를 차지하지 않기때문에
	void *my_void;//그 데이타의 주소를 표현하는 데이터 
	my_void = (void*)&i;
	my_void = (void*)&f;

	return 0;
} 