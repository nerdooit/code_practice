/*
 * Name : nerdooit
 * Date : 2020.4.19
 * Description : 15596, 함수
 */

#include <iostream>
#include <vector>

using namespace std;

long long sum(std::vector<int> &a) {
	long long ans = 0;
	for (auto v : a) {
		ans += v;
	}
	return ans;
}

int main()
{
	vector<int> lon;
	lon.push_back(1);
	lon.push_back(10);
	lon.push_back(100);
	lon.push_back(1000);

	cout << sum(lon);

}
