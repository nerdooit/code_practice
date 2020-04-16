/*
 * Name : nerdooit
 * Date : 2020.4.16
 * Description : 2523, 별찍기 13
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N;

	cin >> N;
	for (int i = 1; i <=(N*2)-1; i++) {
		for (int j = 0; j < N - abs(N - i); j++) {
			cout << "*";
		}
		cout << endl;
	}
}
