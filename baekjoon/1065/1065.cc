#include <iostream>

using namespace std;

bool hansu(int n) {
	int arr[3];

	int idx = 0, tmp = n;
	if (n >= 1000) return 0;
	while (1) {
		if (tmp < 10) {
			arr[idx] = tmp%10;
			break;
		}
		arr[idx++] = tmp%10;
		tmp/=10;
	}
	return ((arr[2] - arr[1]) == (arr[1] - arr[0])); // 수식으로 변경 가능
}

int main()
{
	int N, cnt = 0;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		if (hansu(i) || i < 100) cnt++;
	}

	cout << cnt;
}

