### 다시 풀어보기
- 우선, 나누는 방법을 잘 몰랐던 것이 문제
- 최우선의 방을 고려했을 때 계산이 잘 안되서 틀렸다고 생각함. 그게아니라
케이스를 나누면 된다.

또하나의 트릭
```c
		floor = ((n-1)%h) + 1;
		door = ((n-1)/h)+1;
```

최상위 방으로 올라갈 경우가 문제가 되니 최상위 방으로 올라가는 경우를 제외하기
위해 -1을 이용해 한단계 아래의 값을 구한 후 1을 더해 최상위 값을 구하는 케이스
단순히 수식을 줄이기 위한 효과를 낼 수 있다.

- 반례를 고려해보는 것도 능력임
- 1 1 1
- 50 50 2

