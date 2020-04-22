#include <iostream>

using namespace std;

int main()
{
	long long N,cnt=1,acc=1;
	cin >> N;




	if (N == 1) {
		cout << 1;
		return 0;
	}

	N = (N-1)/6;

	while(1) {
		if (acc > N) {
			break;
		}
		cnt++;
		acc += cnt;
	}
	cout << 1 + cnt;
}
