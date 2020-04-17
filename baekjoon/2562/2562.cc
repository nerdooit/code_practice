/*
 * Name : nerdooit
 * Date : 2020.4.17
 * Description : 2562, 최대값
 */

#include <iostream>
#define MAX 9

using namespace std;

int main()
{
	int N[MAX], idx, max = 0;
	for (int i = 0; i < MAX; i++) {
		cin >> N[i];
		if (max < N[i]) {
			idx = i;
			max = N[i];
		}
	}
	cout << N[idx] << endl << idx + 1;
}
