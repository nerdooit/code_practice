/*
 * Name : nerdooit
 * Date : 2020.4.17
 * Description : 4344, 평균은 넘겠지
 */

#include <iostream>

using namespace std;

int main()
{
	int c;
	cin >> c;
	for (int i = 0; i < c; i++) {
		double N;
		double student[1001], avg = 0.0, cnt = 0;
		cin >> N;
		for (int j = 0; j < N; j++) {
			double tmp;
			cin >> tmp;
			student[j] = tmp;
			avg += tmp;
		}
		avg /= N;

		for (int k = 0; k < N; k++) {
			if (avg < student[k]) {
				cnt++;
			}
		}
		cout.setf(ios::showpoint);
		cout << fixed;
		cout.precision(3);
		cout << (cnt/N)*100 << "%\n";
	}
}
