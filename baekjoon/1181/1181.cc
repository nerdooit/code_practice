#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool cmp(string a, string b) {
	if (a.length() < b.length()) return true;

	if (a.length() == b.length()) {
		if (a < b) return true;
	}

	return false;
}

int main()
{
	int N;
	cin >> N;
	vector<string> v;

	for (int i = 0; i < N; i++) {
		string tmp;
		cin >> tmp;
		v.push_back(tmp);
	}

	sort(begin(v), end(v), cmp);
	for (int i = 0; i < v.size(); i++) {
		if (i != 0 && v[i-1] == v[i] ) continue;
		cout << v[i] << endl;
	}
}
