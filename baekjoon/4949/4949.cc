#include <iostream>
#include <stack>

using namespace std;

int main()
{
	while(1)
	{
		stack<char> st;
		string str;
		getline(cin, str);

		if (str[0] == '.') break;

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '[' || str[i] == '(') {
				st.push(str[i]);
				continue;
			}

			if (str[i] == ']' || str[i] == ')') {
				if (st.empty()) {
					st.push('.');
					break;
				}

				if (str[i] == ']') {
					if (st.top() != '[') break;
					st.pop();
				} else if (str[i] == ')') {
					if (st.top() != '(') break;
					st.pop();
				}

			}
		}

		puts(!st.empty() ? "no" : "yes");
	}
}
