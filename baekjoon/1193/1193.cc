#include <iostream>

using namespace std;

int main()
{
	int N, tmp =0;
	cin >> N;

	for (int i = 1; i < 10000000; i++) {
		tmp +=i;
		if (tmp >= N) {
			if (i%2 != 0)
				cout << 1 + (tmp-N) << "/" << i - (tmp-N);
			else
				cout << i -  (tmp-N) << "/" << 1 + (tmp-N);
			break;
		}
	}
}
