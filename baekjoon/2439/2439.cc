/*
 * Name : nerdooit
 * Date : 2020.4.13
 * Description : 2439, 별찍기 2
 */

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <=n; i++) {
		for (int z = 1; z <= n-i; z++) cout << " ";
		for (int j = n-i; j < n; j++) cout << "*";

		cout <<endl;
	}
}
