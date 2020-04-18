/*
 * Name : nerdooit
 * Date : 2020.4.18
 * Description : 11720, 숫자의합
 */

#include <iostream>

using namespace std;

int main()
{
	int N, res=0;
	string num_set;

	cin >> N >> num_set;

	for (int i = 0; i < N; i++) {
		res += (num_set.at(i) - '0');
	}

	cout << res;
}
