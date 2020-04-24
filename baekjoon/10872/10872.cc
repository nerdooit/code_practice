#include <iostream>

using namespace std;

int ft(long long n) {
	if (n == 1) {
		return n;
	}

	return n*ft(n-1);
}


int main()
{
	long long n;
	cin >> n;
	if (n == 0) cout << 1 << endl;
	else cout << ft(n) << endl;
}

