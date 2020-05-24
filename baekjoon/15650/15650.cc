#include <iostream>

using namespace std;

int N, M, cnt, arr[8];
bool check[8];

// 오름차순으로 정렬해서 출력해야한다.
// 따라서 시작점을 전달함으로, 어떤값을 담아야하는지 결정한다.
void dfs(int cnt, int idx) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			printf("%d ",arr[i]);
		}
		printf("\n");
		return;
	}

	for (int i = idx; i < N; i++) {
			arr[cnt] = i + 1;
			dfs(cnt + 1, i);
	}
}

int main()
{
	cin >> N >> M;
	dfs(0, 0);
}
