#include <iostream>
#include <stack>
using namespace std;

stack<int> st;
void stack_case(string str)
{
	if (str == "push") {
		int tmp;
		cin >> tmp;
		st.push(tmp);
		return;
	} else if (str == "top") {
		if (st.size() == 0) {
			cout << -1 << endl;
			return;
		}
		cout << st.top();
	} else if (str == "size") {
		cout << st.size();
	} else if (str == "empty") {
		cout << st.empty();
	} else if (str == "pop") {
		if (st.size() == 0) {
			cout << -1 << endl;
			return;
		}
		cout << st.top();
		st.pop();
	}
	cout << endl;
}


int main()
{
	int n;
	cin >> n;
	while(n--) {
		string tmp_str;
		cin >> tmp_str;
		stack_case(tmp_str);
	}
}
