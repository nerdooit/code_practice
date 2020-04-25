#include <iostream>

using namespace std;

int main()
{
	int t, h,w,n, door,floor;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
/*
		if (n%h == 0) {
			floor = h;
			door = n/h;
		} else {
			floor = n%h;
			door = n/h + 1;
		}
*/
		floor = ((n-1)%h) + 1;
		door = ((n-1)/h)+1;

		cout << floor*100 + door << endl;
	}
}
