/*
 * Name : nerdooit
 * Date : 2020.4.18
 * Description : 2446, 별찍기-9
 */

#include <iostream>

using namespace std;

int main()
{
	int N, k, tmp;
	cin >> N;

	for (int i = 0; i <= 2*N - 1; i++) {
		if (i == N) continue;

		if (i >= N+1) tmp = N - abs(N-i) - 1;
		else tmp = N - abs(N-i);

		for (int k = 0; k < tmp; k++){
			cout << " ";
		}

		for (int j = 0; j < abs((2*N-1) - 2*i); j++) {
			cout << "*";
		}
		cout << endl;
	}
}
