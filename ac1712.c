#include<stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", (c - b) <= 0 ? -1 : a / (c - b) + 1);
	return 0;
}
