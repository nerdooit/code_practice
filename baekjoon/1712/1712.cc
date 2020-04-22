#include <iostream>

using namespace std;

int main()
{
	long long a,b,c;
	cin >> a >> b >> c;

	long long tmp = c-b;

	if (b >= c) cout << -1;
	else cout << (a/tmp) + 1;
}
