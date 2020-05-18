#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int acc = 0;
	vector<int> v;

	for (int i = 0; i < 9; i++) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
		acc += tmp;
	}

	for (int i = 0; i < 9; i++) {
		bool check = false;
		for (int j = i + 1; j < 9; j++) {
			int tmp = acc - (v[i] + v[j]);
			if (tmp == 100) {
				v[i] = -1;
				v[j] = -1;
				check = true;
				break;
			}
		}

		if (check) break;
	}

	sort(begin(v),end(v));
	for (auto a : v) if (a != -1)cout << a << endl;
}
