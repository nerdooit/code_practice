#include <iostream>

using namespace std;

int main()
{
	int arr[101];
	int tmp[101];

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int res;
		cin >> res;

		if (!arr[res]) arr[res] = i+1;
		else {
			for (int j = res; j <= i; j++) {
				tmp[j + 1] = arr[j];
			}

			arr[res] = i+1;

			for (int k = res + 1; k <= i; k++) {
				arr[k] = tmp[k];
			}
		}
	}

	for (int i = N-1; i >= 0; i--) cout << arr[i] << " ";
}
