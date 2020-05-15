#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> v;

  for (int i = 0; i < N; i++) {
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }

  sort(begin(v), end(v));

  for (auto a : v) cout << a << endl;
}
