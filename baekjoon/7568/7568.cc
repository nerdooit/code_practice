#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{
	int T;
	vector<pair<int,int>> v;

	cin >> T;
	for (int i = 0; i < T; i++) {
		pair<int, int> tmp;
		cin >> tmp.first >> tmp.second;
		v.emplace_back(tmp);
	}

	for (int i = 0; i < T; i++) {
		int count = 1;
		for (int j = 0; j < T; j++) {
			if (v[i].first < v[j].first && v[i].second < v[j].second) count++;
		}
		cout << count << " ";
	}
}
