/*
 * Name : nerdooit
 * Date : 2020.4.22
 * Description : 2839, 설탕배달
 *							 우선, 먼저 큰걸로 나누고 이후 작은 것이 나눠지는지까지 계속
 *							 접근
 */

#include <iostream>

using namespace std;

int main()
{
	int N, a, b, tmp;
	cin >> N;

	a = N/5;
	tmp = N%5;

	while (1) {
		if (tmp == 0) {
			cout << a;
			break;
		}

		if(tmp%3 == 0) {
			b = tmp/3;
			cout << a+b;
			break;
		} else {
			if (a == 0) {
				cout << -1;
				break;
			}
		}

		a--;
		tmp+=5;
	}

}
