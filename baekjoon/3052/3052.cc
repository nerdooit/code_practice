/*
 * Name : nerdooit
 * Date : 2020.4.17
 * Description : 3052, 나머지
 */

#include <iostream>
#define MAX 10
#define FIX 42
using namespace std;

int main()
{
	int N[1001] = {0,};
	int tmp,cnt = 0;

	for (int i = 0; i < 10; i++) {
		cin >> tmp;
		if (N[tmp%FIX] == 0) {
			N[tmp%FIX] = 1;
			cnt++;
		}
	}
	cout << cnt;
}
