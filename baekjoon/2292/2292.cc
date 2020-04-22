#include <iostream>

using namespace std;

int main()
{
	long long N,cnt=0,acc=1, tmp=1, tmp1=6;
	cin >> N;

	while (1) {
		if (tmp < N) {
			tmp += tmp1;
		} else {
			break;
		}
		acc++;
		tmp1 += 6;
	}

	cout << acc;
}
