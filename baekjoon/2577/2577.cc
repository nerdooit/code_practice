/*
 * Name : nerdooit
 * Date : 2020.4.17
 * Description : 2577, 숫자의 개수
 */

#include <iostream>

using namespace std;

int main()
{
	int N[10]= {0,};
	int a,b,c,k;

	cin >> a >> b >> c;
	k = a*b*c;

	while (k != 0) {
		N[k%10]++;
		k /=10;
	}
	for (int i = 0; i < 10; i++) cout << N[i] << endl;
}
