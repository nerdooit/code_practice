#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	cout << min(min(w-x, h-y), min(x-0, y-0)) << endl;
}
