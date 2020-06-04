#include <iostream>
#include <stack>

using namespace std;

int main()
{
	long long sum = 0;
	int n;
	stack<int> st;
	scanf("%d",&n);

	while (n--) {
		int tmp;
		scanf("%d",&tmp);
		if(tmp == 0) { st.pop(); continue;}
		st.push(tmp);
	}

	int sz = st.size();
	for (int i = 0; st.size() != 0 && i <= sz; i++) {
		sum += st.top();
		st.pop();
	}

	cout << sum << endl;
}
