/*
 * Name : nerdooit
 * Date : 2020.4.18
 * Description : 2675, 문자열 반복
 */

#include <iostream>

using namespace std;

int main()
{
	int T;
	string alnum = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\\$%*+-./:";
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N;
		string str;
		cin >> N >> str;

		for (int j = 0; j < str.length(); j++) {
			for (int k = 0; k < alnum.length(); k++) {
				if (str.at(j) == alnum.at(k)) {
					for (int idx = 0; idx < N; idx++) cout << str.at(j);
				}
			}
		}
		cout << endl;
	}

}
