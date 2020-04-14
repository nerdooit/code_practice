/*
 * Name : nerdooit
 * Date : 2020.4.14
 * Description : 5543, 상근날드
 */

#include <iostream>
#define MAX 5

using namespace std;

int main()
{
	int ham_min=2001, bev_min=2001;
	for (int i = 0; i < MAX; i++) {
		int tmp;
		cin >> tmp;
		if (i <= 2) {
			if (ham_min > tmp) ham_min = tmp;
		} else {
			if (bev_min > tmp) bev_min = tmp;
		}
	}

	cout << ham_min + bev_min - 50;
}

// algorithm을 이용한 min 사용하기
