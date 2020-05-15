#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

typedef struct person_ {
	int age;
	string name;
} person;

bool cmp (const person& p1, const person& p2) {
	if (p1.age >= p2.age) return false;

	return true;
}

int main()
{
	vector<person> v;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		person p;
		char str[200];
		//cin >> p.age >> p.name;
		scanf("%d %s",&p.age, str);

		p.name = str;

		v.push_back(p);
	}

	sort(begin(v), end(v), cmp);

	for (auto a : v) printf("%d %s\n",a.age, a.name.c_str());
}
