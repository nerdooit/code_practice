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
	ios_base::sync_with_stdio(false); 
  cin.tie(NULL);
	vector<person> v;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		person p;
		cin >> p.age >> p.name;
		v.push_back(p);
	}

	stable_sort(begin(v), end(v), cmp);

	for (auto a : v) cout << a.age << " " << a.name << "\n";
}
