#include <iostream>

using namespace std;

int arr[1001][1001] = {0,};

int main()
{
	int N, W, idx = 1;
	int tmp_max = 0;

	cin >> N >> W;

	while (N--) {
		int tmp, tmp_w;
		cin >> tmp >> tmp_w;
		for (int i = 1; i <= W; i++) {

			if (tmp > i) {
				arr[idx][i] = arr[idx - 1][i];
			} else {
				if (tmp_w + arr[idx - 1][W-i] > arr[idx][i-1]) {
					arr[idx][i] = tmp_w + arr[idx -1][W-i];
				} else {
					arr[idx][i] = arr[idx][i-1];
				}
			}
		}

		if (tmp_max < arr[idx][W]) tmp_max = arr[idx][W];

		idx++;
	}

	cout << tmp_max << endl;
}
