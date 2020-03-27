/*
 * Name : nerdooit
 * Description : *를 이용하여 정사각형, 직사각형, 삼각형의 형태를 출력하시오.
*/

#include <iostream>
#include <string>

using namespace std;

void rectangle(int a, int b)
{
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

void triangle(int a)
{
	// 인자가 홀수로 들어온다고 가정
	int start = a/2;
	int end = a/2;

	for (int i = 0; i <= a/2; i++) {
		for (int j = 0; j < a; j ++) {
			if ( j >= start && j <= end)
				cout << "*";
			else
				cout << " ";
		}
		start -= 1;
		end += 1;
		cout << endl;
	}
}

int main()
{
	cout << "정사각형 (2,2) " << endl;
	rectangle(2,2);
	cout << endl << "직사각형 (3,5)" << endl;
	rectangle(3,5);
	cout << endl << "삼각형 ( col 기준 5)" << endl;
	triangle(5);

}
