/*
 * Name : nerdooit
 * Date : 2020.4.13
 * Description : 2739, 구구단
 */

#include <iostream>
#define MAX 9

using namespace std;

int main()
{
	int a;
	cin >> a;
	for (int i = 1; i <= MAX; i++)
		cout << a << " * " << i << " = " << a*i << endl; 
}
