#include <iostream>

using namespace std;

int main()
{
	int N, max = 0;
	cin >> N;

	while (N--) {
		int arr[7] = { 0, }, checker = 0, won, tmp_max;

		for (int i = 0; i < 3; i++) {
			int tmp;
			cin >> tmp;
			arr[tmp]++;
		}

		for (int j = 6; j > 0; j--) {
			if(arr[j] && arr[j] > checker) {
				checker = arr[j];
				won = j;
			}
		}

		switch(checker) {
			case 3:
				tmp_max = 10000 + (won * 1000);
				break;
			case 2:
				tmp_max = 1000 + (won * 100);
				break;
			default:
				tmp_max = won*100;
				break;
		}

		if ( tmp_max > max ) {
			max = tmp_max;
		}
	}

	cout << max << endl;
}
