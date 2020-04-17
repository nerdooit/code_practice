/*
 * Name : nerdooit
 * Date : 2020.4.17
 * Description : 10818, 최소 최대
 */


#include <iostream>

using namespace std;

int main()
{
	int min=1111111, max = -11111111;

	int N;
	cin >> N;

	for (int i = 0; i <N; i++) {
		int tmp;
		cin >> tmp;
		if (min > tmp) min = tmp;
		if (max < tmp) max = tmp;
	}
	cout << min << " "<< max;
}
