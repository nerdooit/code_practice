/*
 * Name : nerdooit
 * Date : 2020.4.12
 * Description : 2884, 알람시계
 */

#include <iostream>

using namespace std;

int main()
{
	int h,m;

	cin >> h >> m;

	if (m < 45) {
		m +=15;
		h -= 1;
		if (h < 0) h = 23;
	}	else {
		m -= 45;
	}

	cout << h << " "<< m;
}
