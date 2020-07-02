#include <iostream>

using namespace std;


int main()
{
	int N, W, idx = 1;
	int tmp_max = 0;

	cin >> N >> W;
	int arr[N][W+1];
	for (int i = 0; i <= N; i++) for (int j = 0; j <= W; j++) arr[i][j] = 0;

	while (N--) {
		int tmp, tmp_w;
		cin >> tmp >> tmp_w;
		for (int i = 1; i <= W; i++) {

			if (W > i) {
				arr[idx][i] = arr[idx - 1][i];
			} else {
				if (tmp_w + arr[idx - 1][W-i] > arr[idx][i-1]) {
					arr[idx][i] = tmp_w + arr[idx - 1][W-i];
				} else {
					arr[idx][i] = arr[idx][i-1];
				}
			}
		}

		if (tmp_max < arr[idx][W]) tmp_max = arr[idx][W];

		if (!idx) idx = 1;
		else idx = 0;
	}

	cout << tmp_max << endl;
}
