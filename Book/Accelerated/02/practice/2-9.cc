/*
* Name : nerdooit
* Description : 사용자가 입력한 2개의 숫자 중 어떤 것이 더 큰 것인지 알려주는 프로그램
*/

#include <iostream>
using namespace std;

void sizeChecker (int a, int b)
{
	if ( a > b) {
		cout << a << " 가 더 큽니다." << endl;
	} else if ( a == b) {
		cout << " 값이 동일 합니다." << endl;
	} else {
		cout << b << " 가 더 큽니다." << endl;
	}
}


int main()
{
	int a, b;
	cout << " 두 개의 숫자를 입력하세요 : ";
	cin >> a >> b;
	sizeChecker(a,b);
}
