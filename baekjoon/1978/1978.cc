#include <iostream>

using namespace std;

int main()
{
	int N, cnt = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int tmp,j;
		cin >> tmp;
		for (j = 2; j<= tmp; j++) {
			if (tmp % j == 0) break;
		}

		if (j == tmp) cnt++;
	}

	cout << cnt;
}
