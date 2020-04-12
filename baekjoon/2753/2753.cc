/*
 * Name : nerdooit
 * Date : 2020.4.12
 * Description : 2753, 윤년 (문자 그대로 써서 제출하면 됨. 어짜피 1,0을 뽑음)
 */

#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	cout << ((a%4 == 0) && (a%100 != 0 || a%400 == 0));
}
