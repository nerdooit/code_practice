#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, cnt = 0, i=666, res;
	cin >> N;

	while(1) {
		string str = to_string(i);
		if(str.find("666") != string::npos) {
			cnt++;
		}
		if (N == cnt) {
			res = i;
			break;
		}
		i++;
	}
	cout << i << endl;
}
