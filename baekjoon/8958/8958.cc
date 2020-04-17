/*
 * Name : nerdooit
 * Date : 2020.4.17
 * Description : 8958, OX 퀴즈
 */

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int acc=0, res=0;
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			if (str.at(j) == 'O') {
				acc++;
			} else {
				acc = 0;
			}
			res += acc;
		}
		cout << res << endl;
	}
}
