#include <iostream>

using namespace std;

int fac(int n) { return n ? n*fac(n-1) : 1; }

int main()
{
	int n;
	cin >> n;
	cout << fac(n) << endl;
}
