#include <iostream>

using namespace std;

int selfNumber(int n) {
	int res = 0;
	int tmp = n;
	while (1) {
		if (n/10 < 10) {
			res += (n/10 + n%10);
			break;
		}
		res += n%10;
		n /= 10;
	}
	return res;
}

int main()
{
	int n[10001] = {0,};

	for (int i = 1; i <= 10000; i++) {
		int tmp = i +selfNumber(i);
		if (tmp > 10000) tmp = 0;
		if (n[tmp] == 0) n[tmp]++;
	}
	for (int j = 1; j <= 10000; j++) {
		if (n[j] == 0) cout << j << endl;
	}
}
