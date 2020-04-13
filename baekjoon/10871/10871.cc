
#include <iostream>

using namespace std;

int main()
{
	int a , b;
	cin >> a >> b;

	for (int i = 0; i < a ; i++) {
		int tmp;
		cin >> tmp;
		if (b > tmp) cout << tmp << " ";
	}
}
