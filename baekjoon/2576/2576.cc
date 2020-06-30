#include <iostream>

using namespace std;

int main()
{
	int av = 0, arr[100] = {0,};
	for (int i = 0; i < 7; i++) {
		int tmp;
		cin >> tmp;
		if ((tmp % 2) != 0) {
			arr[tmp]++;
			av += tmp;
		}
	}

	if (!av) cout << -1 << endl;
	else {
		for (int i = 1; i < 100; i+=2) {
			if (arr[i]) {
				cout << av << endl << i << endl;
				break;
			}
		}
	}
}
