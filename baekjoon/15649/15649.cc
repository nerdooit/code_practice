#include <iostream>

using namespace std;

int N, M, arr[8];
bool check[8];

void dfs(int cnt) {

	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			printf("%d ",arr[i]);
		}
		cout << "\n";
		return;
	}

	for (int i = 0; i < N; i++) {
		if (!check[i]) {
			check[i] = true;
			arr[cnt] = i+1;
			dfs(cnt+1);
			check[i] = false;
		}
	}
}

int main()
{
	cin >> N >> M;
	dfs(0);
}
