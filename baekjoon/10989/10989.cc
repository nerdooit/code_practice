#include <iostream>

using namespace std;

int main()
{
  int N, arr[10001] = {0,};
  cin >> N;

  for (int i = 0; i < N; i++) {
    int tmp;
    scanf("%d",&tmp);
    arr[tmp]++;
  }

  for (int i = 1; i <= 10000; i++) {
    for (int j = 0; j < arr[i]; j++) {
      printf("%d\n",i);
    }
  }
}
