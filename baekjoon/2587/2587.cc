#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	int av = 0;
	for (int i = 0; i < 5; i++) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
		av += tmp;
	}

	sort(begin(v), end(v));
	cout << av/5 << endl << v[2] << endl;

}
