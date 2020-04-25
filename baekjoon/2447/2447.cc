#include <iostream>
#define MAX 49014001

using namespace std;

char arr[7001][7001];

void print(int x, int y, int n) {
	if (n == 1) {
		arr[x][y] = '*';
		return;
	}
	int num = n/3;
	for (int i = 0; i < 3; i++) {
		for (int j= 0; j < 3; j++) {
			if (i == 1 && j == 1) continue;

			print(x+ (i*num), y + (j*num), num);
			// x,y를 전달하는 코드로 짰고, 그러다보니 시작점은 x,y가 되야한다. 따라서,
			// 첫 시작점은 0,0이 되야함. 계산했을 경우
		}
	}
}

int main()
{
	int N;
	cin >> N;

	fill_n(arr[0], MAX, ' ');
	// 채우는 동작
	print(1, 1, N);

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}
}
