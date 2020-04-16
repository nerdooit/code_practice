/*
 * Name : nerdooit
 * Date : 2020.4.16
 * Description : 10996, 별찍기-21
 */



#include <iostream>

using namespace std;

int main()
{

	int N;
	cin >> N;

	for (int i = 0; i < 2*N; i++) {
		for (int j = 0; j < N; j++) {
			if ((i+j)%2 == 0) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
}
