#include <iostream>

using namespace std;

class Vector {
public:
	Vector(int s) : elem{new double [s]}, sz{s} {} // Vector 생성
	double& operator[](int i) { return elem[i]; } // 요소 접근 : index연산자 재정의
	int size() { return sz; }
private:
	double* elem;
	int sz;
};

double read_and_sum(int s)
{
	Vector v(s);
	for(int i = 0; i != v.size(); i++)
		cin >> v[i];
	double sum = 0;
	for(int i = 0; i != v.size(); i++)
		sum += v[i];

	return sum;
}


int main()
{
	cout << "sum : " << read_and_sum(4);
}
