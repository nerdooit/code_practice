/*
* Name : nerdooit
* Description : std:: 쓰임새 설명
*/
#include <iostream>

int main()
{
	int k = 0;
	while (k != 10) {
		using std::cout; // while 문 내에서 std::cout 을 cout로 쓰겠다고 alias 선언
		cout << "*" ;
		++k;
	}

	// general 하게 쓰이는 것으로, std namespace에 저장된 cout을 사용
	std::cout << std::endl;
	return 0;
}
