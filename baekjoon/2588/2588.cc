/*
 * Name : nerdooit
 * Date : 2020.4.12
 * Description : 나머지와 몫을 활용한 값 구하기. 몫을 활용해 가장 첫 번째 값을
 * 출력할 수 있고 이후 나머지를 이용하고 몫을 구하면 두번째 자리수를 구할 수
 * 있다. 마지막 같은 경우 나머지 값으로 추출 가능하다.
 * 결국 마지막 출력은 결과 값이기 때문에 이렇게 활용할 필요 없다.
 */

#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << a*(b%10) << endl << a*((b%100)/10) << endl << a*(b/100) << endl << a*b;
}
