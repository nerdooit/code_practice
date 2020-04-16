
#include <iostream>

using namespace std;

int main()
{
	int a,b,c;

	cin >> a >> b >> c;

	if (( a >= b && c >= a ) || (a >= c && b >= a)) cout << a;
	else if ((b >= a && c >= b) || (b >=c && a >= b)) cout << b;
	else cout << c;
}
