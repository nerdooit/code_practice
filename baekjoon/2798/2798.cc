#include <iostream>

using namespace std;

int main()
{
	int N, M, a[100], min = 1e9, res;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++) {
			for (int k = j+1; k < N; k++) {
				int tmp = M - (a[i] + a[j] + a[k]);
				if (min > tmp && tmp >= 0) {
					min = tmp;
					res = a[i] + a[j] + a[k];
				}
			}
		}
	}

	cout << res << endl;
}
