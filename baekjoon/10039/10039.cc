/*
 * Name : nerdooit
 * Date : 2020.4.14
 * Description : 10039, 평균점수
 */

#include <iostream>
#define MAX 5

using namespace std;

int main()
{
	int acc = 0;
	for (int i = 0; i < MAX; i++) {
		int tmp;
		cin >> tmp;
		if (tmp < 40) tmp = 40;
		acc += tmp;
	}
	cout << acc/MAX;
}
