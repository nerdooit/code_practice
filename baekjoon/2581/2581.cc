#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int M, N, min = 9999999, acc =0;
	cin >> M >> N;

	for (int  i = M; i <= N; i++) {
		bool check = false;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				check = true;
				break;
			}
		}

		if (!check && i != 1) {
			if (min > i) min = i;
			acc += i;
		}
	}

	if (acc == 0) cout << -1 << endl;
	else cout << acc << endl << min << endl;
}
