#include <iostream>

using namespace std;

int main()
{
	int x[3], y[3], res_x, res_y, res_x_1, res_y_1;

	for (int i = 0; i < 3; i++) {
		cin >> x[i] >> y[i];
		if (i == 0) {
			res_x = x[0];
			res_y = y[0];
			continue;
		}

		if (res_x == x[i]) {
			x[0] = -1;
			x[i] = -1;
		} else {
			res_x_1 = x[i];
		}

		if (res_y == y[i]) {
			y[0] = -1;
			y[i] = -1;
		} else {
			res_y_1 = y[i];
		}
	}

	if (x[0] == -1) cout << res_x_1 << " ";
	else cout << x[0] << " ";

	if (y[0] == -1) cout << res_y_1 << " ";
	else cout << y[0] << " ";
}
