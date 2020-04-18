### 다른 사람의 코드와 비교

```c
#include<stdio.h>

int abs(int x)
{
    return x > 0 ? x :-x;
}

int main()
{
    int n;

    scanf("%d", &n);

    for(int i=-n+1; i<n; i++)
    {
        for(int j=abs(i)+1; j<n; j++)
            printf(" ");
        for(int j=0; j<abs(i)*2+1; j++)
            printf("*");
        printf("\n");
    }
}
```

- 절대값을 사용할 것이니 -n ~ n까지의 범위로 나눠서 생각하면 된다.
- " " 두번째 칸부터 한칸씩증가하면 되고
- 꼭지점을 기점으로 늘어나면 되는데 그걸 잘 표현 한 듯

- 다시 풀어 볼 것
