#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	while(N--) {
		int top = 0;
		string tmp;
		cin >> tmp;

		for(int i = 0; i < tmp.size(); i++) {
			if (tmp[i] == '(') {
				top++;
			} else {
				top--;
				if (top < 0) {
					break;
				}
			}
		}
		puts(top ? "NO" : "YES");
		//if (top != 0) cout << "NO" << endl;
		//else cout << "YES" << endl;
	}
}
