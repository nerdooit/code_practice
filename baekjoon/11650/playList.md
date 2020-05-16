### stable sort 특징 정리 -> 그림으로
### pair 정렬 요청 시, genernal sort 는 어떻게 동작하는 지 조사

### 코드 해석 해볼 것
```c
#include <cstdio>
#include <algorithm>

using namespace std;

char buf[1<<14];
int idx = 1<<14;

char read()
{
	if (idx == 1<<14)
	{
		fread(buf, 1, 1<<14, stdin);
		idx = 0;
	}
	return buf[idx++];
}
inline int readInt()
{
	int sum = 0;
	int flg = 0;
	char now = read();

	while (now == ' ' || now == '\n') now = read();
	if (now == '-') flg = 1, now = read();
	while (now >= '0' && now <= '9')
	{
		sum = sum*10 + now-48;
		now = read();
	}
	
	return flg ? -sum : sum;
}
int main()
{
	int n;

	n = readInt();
	pair<int, int> p[100000];

	for (int i = 0; i < n; ++i)
	{
		p[i].second = readInt();
		p[i].first = readInt();
	}

	sort(p, p+n);
	for (int i = 0; i < n; ++i)
		printf("%d %d\n", p[i].second, p[i].first);

	return 0;
}
```

YunGoon 님이 푼 문제
