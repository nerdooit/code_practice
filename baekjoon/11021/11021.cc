/*
 * Name : nerdooit
 * Date : 2020.4.13
 * Description : 11021, A+B-7
 */

#include <iostream>

using namespace std;

int main()
{
	int n,a,b;
	cin >>n;

	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		cout << "Case #" << i << ": " << a+b << endl;
	}
}
