#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		int tmp = i, res = 0;

		while(1) {
			if (tmp < 10) {
				res += tmp;
				break;
			}
			res += (tmp%10);
			tmp /= 10;
		}

		if ((i + res) == N) {
			cout << i << endl;
			return 0;
		}
	}

	cout << "0" << endl;
}
