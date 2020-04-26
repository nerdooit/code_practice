#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		long long a = 0, b = 0, N = 0,  idx = 0, acc = 0;
		cin >> a >> b;

		N = (b - a) ;

		for (idx = 1 ; idx < 50000; idx++) {
			if (idx * idx >= N) {
				break;
			}
			acc += idx;
		}

		if (N <= acc*2) cout << (idx-1) * 2 << endl;
		else cout << idx*2 - 1 << endl;

	}
}
