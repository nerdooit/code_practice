#include <iostream>

using namespace std;

int main()
{
	int arr[10001] = {1,1,0};
	for (int i = 2; i <= 10000; i++)
		for (int j = 2*i; j <= 10000; j+=i)
			if (!arr[j] && j%i == 0) arr[j] = 1;

	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int input, idx_i, idx_j;
		cin >> input;
		idx_i = idx_j = input/2;
		while(1) {
			if(!arr[idx_i] && !arr[idx_j]) break;
			idx_i--;
			idx_j++;
		}

		cout << idx_i << " " << idx_j << endl;
	}
}
