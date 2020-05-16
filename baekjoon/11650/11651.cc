#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
	if (a.second < b.second) return true;
	return false;
}

bool cmp_2(pair<int,int> a, pair<int,int> b) {
	if (a.second == b.second) {
		if (a.first < b.first) return true;
	}
	return false;
}

int main()
{
	int N;
	cin >> N;

	vector<pair<int,int>> v;


	for (int i = 0; i < N; i++) {
		pair<int,int> p;
		scanf("%d %d",&p.first,&p.second);
		v.push_back(p);
	}

	stable_sort(begin(v), end(v), cmp);
	stable_sort(begin(v), end(v), cmp_2);
	for (auto a : v) cout << a.first << " " << a.second << "\n";
}
