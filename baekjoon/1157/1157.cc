/*
 * Name : nerdooit
 * Date : 2020.4.18
 * Description : 1157, 단어공부
 */

//for (auto & c: str) c = toupper(c);

#include <algorithm>
#include <iostream>
#define MAX 26

using namespace std;

int main()
{
	string str;
	int arr[MAX] = {0,}, max = -1, check=0, idx;
	cin >> str;

	transform(str.begin(), str.end(),str.begin(), ::toupper);

	for (int i = 0; i< str.length(); i++) {
		arr[str.at(i) - 'A']++;
	}

	for (int i = 0; i< MAX; i++) {
		if (max <= arr[i]) {
			if (max == arr[i]) {
				check = 1;
				continue;
			}
			max = arr[i];
			idx = i;
			check = 0;
		}
	}

	if (check) cout << "?";
	else printf("%c",'A' + idx);
}

