### 문자열 배열
- FFFFDCBAA[1] 이런식으로 하면, A가 출력되는 것을 이용해서도 풀 수 있다.

'''c
#include <cstdio>

int main() {
  int x;
  scanf("%d", &x);
  printf("%c", "FFFFFFDCBAA"[x / 10]);
}
'''
