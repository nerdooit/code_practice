/*
 * Name : nerdooit
 * Date : 2020.4.18
 * Description : 10809, 알파벳 찾기
 */

#include <iostream>
#define MAX 26

using namespace std;

int main()
{
	int arr[MAX];
	string str;
	cin >> str;

	fill_n (arr, MAX, -1);

	for (int i = 0; i < str.length(); i++) {
		if (arr[str.at(i)-'a'] == -1)
			arr[str.at(i)-'a'] = i;
	}

	for (int i = 0; i < MAX; i++) cout << arr[i] << " ";
}
