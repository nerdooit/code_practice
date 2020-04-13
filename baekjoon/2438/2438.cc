/*
 * Name : nerdooit
 * Date : 2020.4.13
 * Description : 2438, 별찍기 1
 */

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <=n; i++) {
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << endl;
	}
}
