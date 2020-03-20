#include <iostream>
#include <string>

// 표준 라이브러리에서 가져와서 사용할 이름 언급
// 미리 정의
using std::cin; using std::endl;
using std::cout; using std::string;

int main()
{
	// 사용자 이름 물어보자
	cout << "Please enter your first name: ";

	// 이름 읽자
	string name;
	cin >> name;

	// 출력하는 메세지 구성
	const string greeting = "Hello, " + name + "!";

	// 인사말 둘러 싼 공백 수
	int pad = 1;

	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + pad * 2 + 2;

	cout << endl;

	// row 개의 행을 출력
	for (int r = 0; r != rows; ++r) {
		string::size_type c = 0;

		while (c != cols) {
			if (r == pad + 1 && c == pad + 1) {
				cout << greeting;
				c += greeting.size();
			}
			else {
				// 테두리 출력 여부 판별
				if (r == 0 || r == rows -1 ||
						c == 0 || c == cols -1)
						cout << "*";
				else
						cout << " ";
				++c;
			}
		}
		cout << endl;
	}
}
