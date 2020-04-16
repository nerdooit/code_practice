/*
 * Name : nerdooit
 * Date : 2020.4.16
 * Description : 10871, 세수
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;

	for (int i = 0; i < 3; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	sort(begin(v),end(v));

	cout << v[1];
}
