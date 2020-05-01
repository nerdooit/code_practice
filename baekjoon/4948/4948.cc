#include <iostream>
#include <cmath>

#define MAX 300000

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[MAX] = {1,1,0,};

	for (int i = 2; i <= sqrt(MAX); i++) {
		for (int j = 2*i; j <= MAX; j += i ) {
			if (arr[j]) continue;
			else {
				if (j % i == 0) arr[j] = 1;
			}
		}
	}

	while (1) {
		int n, cnt = 0;
		cin >> n;

		if (n == 0) break;

		for (int i = n + 1; i <= 2*n; i++) {
			if(!arr[i]) cnt++;
		}
		cout << cnt << endl;
	}
}
