/*
 * Name : nerdooit
 * Date : 2020.4.18
 * Description : 5622, 다이얼
 */

#include <iostream>

using namespace std;

int main()
{
	int di[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };

	string str;
	cin >> str;

	int res = 0;

	for (int i = 0; i < str.length(); i++) {
		res += di[str.at(i) - 'A'];
	}

	cout << res;
}
