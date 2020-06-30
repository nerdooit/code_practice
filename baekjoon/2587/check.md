### 재밌는 코드
이렇게도 풀 수 있다.
#include <cstdio>

int s, t, n=5, c, a[95];
int main() {
	while(n--) scanf("%d", &t), a[t]++, s += t;
	for(t=0; c<3; t++) c += a[t];
	printf("%d\n%d", s / 5, --t);
	return 0;
}
