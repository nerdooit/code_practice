/*
 * Name : nerdooit
 * Desription : 테두리로 둘러싸인 인사말을 출력할 때, 사용자가 테두리와 인사말 사이의 공백을 입력받도록 하자.
*/

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

	string frame;
  string space;

	cout << "what do you want the frame?" << endl;
	cin >> frame;
  cin.ignore();
  // 버퍼에 남아있는 것이 있어서 비워줘야함.
	cout << "what do you want the space?" << endl;
	std::getline(cin,space);

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
						c == 0 || c == cols -1) {
						cout << frame;
				}
				else
						cout << space;
				++c;
			}
		}
		cout << endl;
	}
}
