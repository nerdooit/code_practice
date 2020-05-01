#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int arr[1000001] = {1,1,0,}, M, N;

	for (int i = 2; i <= 1000; i++) {
		for (int j = 2*i; j <= 1000000; j+=i) {
			if (arr[j]) continue;
			else {
				if(j % i == 0) arr[j] = 1;
			}
		}
	}

	cin >> M >> N;

	for (int i = M; i <= N; i++) {
		if (!arr[i]) printf("%d\n",i);
	}
}
