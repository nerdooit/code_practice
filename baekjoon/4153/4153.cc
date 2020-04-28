#include <cmath>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	while(1) {
		vector<int> a;

		for (int i = 0; i < 3; i++) {
			int tmp;
			cin >> tmp;
			a.push_back(tmp);
		}
		if (a[0] == 0 && a[1] == 0 && a[2] == 0) break;
		sort(begin(a), end(a));

		if (pow(a[0],2) + pow(a[1],2) == pow(a[2],2)) cout << "right" << endl;
		else cout << "wrong" << endl;
	}
}
