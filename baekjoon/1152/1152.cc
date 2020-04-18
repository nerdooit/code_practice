/*
 * Name : nerdooit
 * Date : 2020.4.18
 * Description : 1152, 단어개수
 */

#include <iostream>

using namespace std;

int main()
{
	int cnt = 0;
	string str;

	getline(cin,str);
	for (int i = 0; i < str.length(); i++) {
		if (str.at(i) == ' ') cnt++;
	}

	if (str.at(0) == ' ') cnt -= 1;
	if (str.at(str.length() - 1) == ' ') cnt -= 1;

	cout << cnt + 1;

}
