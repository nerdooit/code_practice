/*
 * Name : nerdooit
 * Date : 2020.4.17
 * Description : 1546, 평균
 */

#include <iostream>

using namespace std;

int main()
{
	double N[1001], max=0.0 , res=0.0;
	int num;

	cin >> num;

	for (int i = 0; i < num; i++) {
		double tmp;
		cin >> tmp;
		N[i] = tmp;
		if (max < tmp) {
			max = tmp;
		}
	}

	for (int i = 0; i < num; i++ ) {
		res += (N[i]/max)*100;
	}

	cout << res/num;
}
