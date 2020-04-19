/*
 * Name : nerdooit
 * Date : 2020.4.19
 * Description : 1316, 그룹 단어 체크
 */

#include <iostream>

using namespace std;

int main()
{
	int N, res = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int checker[26] = {0,}, j;
		string str;
		cin >> str;

		char tmp = str.at(0);
		checker[tmp - 'a'] = 1;
		for (j = 1; j < str.length(); j++) {
			if (tmp != str.at(j)) {
				if (checker[str.at(j) - 'a'] != 0) {
					res--;
					break;
				}
				checker[str.at(j) - 'a'] = 1;
				tmp = str.at(j);
			}
		}
		res++;
	}

	cout << res;
}
