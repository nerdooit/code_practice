#include <iostream>
#define MAX 8

using namespace std;

int main()
{
	string cro[MAX] = { "dz=", "c=", "c-", "d-", "lj", "nj", "s=", "z="};

	string str;
	cin >> str;

	int cnt = 0;

	for (int i = 0; i < MAX; i++) {
		for (string::iterator iter = str.begin(); iter != str.end() && !str.empty(); iter++) {
			string::size_type s = str.find(cro[i]);
			if (s != -1) {
				str.replace(s, cro[i].length(), "-");
				cnt++;
			}
		}
	}

	for (int j = 0; j < str.length(); j++) {
		if (str.at(j) != '-') cnt++;
	}

	cout << cnt;
}
