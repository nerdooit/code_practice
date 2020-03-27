/*
* Name : nerdooit
* Description : [1, 10) 범위에 있는 숫자들의 곱을 만드시오
*/

#include <iostream>
using namespace std;

int main()
{
	int accumulate = 1;
	for (int i = 1; i < 10; i++) {
		cout << accumulate << " * " << i << " = ";
		accumulate *= i;
		cout << accumulate << endl;
	}
}
