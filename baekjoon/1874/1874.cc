#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	stack<int> st;
	char v[200001];
	vector<char> v1;
	int N, idx = 0, top = 0;

	//cout << v1.max_size() << endl;
	cin >> N;

	while (N--) {
		int tmp;
		cin >> tmp;
		while (top < tmp) {
			top++;
			//v[idx++] = '+';
			v1.push_back('+');
			st.push(top);
		}

		if (st.top() == tmp) {
			//v[idx++] = '-';
			v1.push_back('-');
			st.pop();
		}
	}

	if (!st.empty()) cout << "NO" << endl;
	else {
		for (auto a : v1) {
			cout << a << "\n";
		}
		//for (int i = 0 ; i < idx; i++)
		//	cout << v[i] << "\n";
	}
}
