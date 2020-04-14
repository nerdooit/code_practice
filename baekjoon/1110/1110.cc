/*
 * Name : nerdooit
 * Date : 2020.4.14
 * Description : 1110, 더하기 사이클
 */

#include <iostream>

using namespace std;

int main()
{
	int N, result, cnt=0;
	cin >> N;

	result = N;
	while (1) {
		int a = result/10;
		int b = result%10;

		result = (b * 10) + ((a + b)%10);
		cnt++;

		if (result == N) break;
	}

	cout << cnt;
}
