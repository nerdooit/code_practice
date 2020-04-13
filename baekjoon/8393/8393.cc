/*
 * Name : nerdooit
 * Date : 2020.4.13
 * Description : 8393, 합
 */

#include <iostream>

using namespace std;

int main()
{
	int n;
	long long b=0;
  cin >> n;
	for (int a = 1; a <= n; a++) {
		b += a;
	}
	cout << b;
}
