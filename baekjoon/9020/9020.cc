#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int arr[10001] = {1,1,0}, T;

	for (int i = 2; i <= 10000; i++) {
		for (int j = 2*i; j <= 10000; j+=i) {
			if (arr[j]) continue;
			else {
				if (j%i == 0) arr[j] = 1;
			}
		}
	}

	cin >> T;
	for (int i = 0; i < T; i++) {
		int tmp, idx_i, idx_j, min=1e9;
		cin >> tmp;

		for(int i = 2; i <= tmp/2; i++) {
			if (arr[i] == 0 && arr[tmp - i] == 0) {
				if (min > (tmp - i) - i ) {
					min = (tmp - i) - i;
					idx_i = i;
					idx_j = (tmp - i);
				}
			}
		}
		printf("%d %d\n",idx_i,idx_j);
	}
}
