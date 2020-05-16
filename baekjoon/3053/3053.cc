#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double r;
	cin >> r;

	cout.setf(ios::showpoint);
	printf("%0.6f \n%0.6f\n",(pow(r,2) * M_PI) ,(r*r*0.5)*4);
}
