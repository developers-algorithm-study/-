#include<stdio.h>

int main() {
	int i, j, x, y, answer;
	int cache[25001];

	scanf("%d %d", &x, &y);

	for (i = 0; i < y; i++) {
		cache[i] = 1;
	}

	for (i = 0; i < x-1; i++) {
		answer = 1;
		for (j = 0; j < y-1; j++) {
			answer = (answer + cache[j]) % 1000000000;
			cache[j] = answer;
		}
	}
	printf("%d", answer);

	return 0;
}
