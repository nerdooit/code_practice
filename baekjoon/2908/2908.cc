/*
 * Name : nerdooit
 * Date : 2020.4.18
 * Description : 2908, 상수
 */

#include <iostream>

using namespace std;

int main()
{
	string str;

	getline(cin,str);

	int a = (str.at(2) - '0') * 100 + (str.at(1) - '0') * 10 + (str.at(0) - '0');
	int b = (str.at(6) - '0') * 100 + (str.at(5) - '0') * 10 + (str.at(4) - '0');

	if (a > b) cout << a;
	else cout << b;
}
