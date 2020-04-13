/*
 * Name : nerdooit
 * Date : 2020.4.13
 * Description : 15552, 빠른 A+B
 */

#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a,b,c;
	cin >> a;
	for (int i = 0; i < a; i++){
		cin >> b >> c;
		cout << b+c << "\n";
	}
}
