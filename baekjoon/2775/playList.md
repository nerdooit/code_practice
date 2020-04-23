### 메모리 낭비 하지 말 것
아래의 소스코드가 더 좋다.

```c
#include<cstdio>
int t, a, b,i,j,d[15];
int main(){
	scanf("%d", &t);
	while (t--){
		scanf("%d %d", &a, &b);
		for (i = 1; i <= b; i++)d[i] = i;
		for (i = 0; i < a; i++){
			for (j = 1; j <= b; j++){
				d[j] += d[j - 1];
			}
		}
		printf("%d\n", d[b]);
	}
}
```
