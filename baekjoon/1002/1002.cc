#include <iostream>

using namespace std;

int rdist(int r) {
	return r * r;
}

int main()
{
	int N;
	cin >> N;

	for(int i = 0; i < N; i++) {
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		int dist = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
		int p_rdist = rdist(r1 + r2);
		int s_rdist = rdist(r1 - r2);

		if (x1 == x2 && y1 == y2 && r1 == r2) cout << "-1" << endl;
		else if (dist > p_rdist) cout << "0" << endl;
		else if (dist == p_rdist) cout << "1" << endl;
		else {
			if (dist == s_rdist) cout << "1" << endl;
			else if (dist < s_rdist) cout << "0" << endl;
			else cout << "2" << endl;
		}
	}
}
