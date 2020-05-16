#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v, tmp_v;
	int N, arr[8001] = {0,};
	double sum = 0.0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int tmp;
		scanf("%d",&tmp);
		sum += tmp;
		v.push_back(tmp);

		if (tmp < 0) {
			arr[4000 + abs(tmp)]++;
		} else {
			arr[tmp]++;
		}
	}

	sort(begin(v), end(v));

	int cnt = 0, res, check = 1;

	for (int i = 0; i <= 8000; i++) {

		if (cnt <= arr[i] && arr[i] > 0) {
			res = i;
			if (i > 4000) res = 4000 - i;

			if (cnt == arr[i]) {
				tmp_v.push_back(res);
				continue;
			}
			tmp_v.clear();
			tmp_v.push_back(res);
			cnt = arr[i];
		}
	}

	sort(begin(tmp_v), end(tmp_v));
	if (tmp_v.size() > 1) res = tmp_v[1];
	else res = tmp_v[0];

	// 거리
	int dist;

	cout << round(sum/N) << endl << v[N/2] <<  endl << res << endl << abs(v[0] - v[N-1]) << endl;


}
