#include <algorithm>
#include <iostream>
#include <vector>
#include <functional>

using namespace std;

int main()
{
	long long N;
	cin >> N;

	vector<int> v;

	while (1) {
		if (N < 10) {
			v.push_back(N);
			break;
		}
		v.push_back(N%10);
		N/=10;
	}
	sort(begin(v), end(v), greater<int> ());
	for (auto a : v) cout << a;
}
