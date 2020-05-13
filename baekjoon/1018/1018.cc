#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string white = "WBWBWBWB";
	string black = "BWBWBWBW";
	char arr[50][50];

	int N,M;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> arr[i][j];
		}
	}


	int res = 999999;
	for (int i = 0; i < (N - 8) + 1; i++) {
		for (int j = 0; j < (M - 8) + 1; j++) {
			int cnt[2] = {0,};

			for (int x = 0; x < 2; x++) {
				string first;
				if (x == 0) {
					first = white;
				} else {
					first = black;
				}
				for (int y = 0; y < 8; y++) {
					for (int z = 0; z < 8; z++) {
						if (arr[i+y][j+z] != first[z]) cnt[x]++;
					}
					if (first.compare(white) == 0) {
						first = black;
					}
					else first = white;
				}
			}

			int min_cnt = min(cnt[0],cnt[1]);
			if (res > min_cnt) res = min_cnt;
		}
	}

	cout << res << endl;
}
