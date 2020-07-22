#include<stdio.h>

int* compare(int *a, int*b, int idx) {
	if (idx == 0) {
		a[0] = 0;
		return a;
	}

	if (a[idx] > b[idx]) {
		return a;
	}
	else if (a[idx] < b[idx]) {
		return b;
	}
	return compare(a, b, --idx);
}

int main() {
	int n, score_a, score_b, score_c, i;
	int a[5] = { 0 }, b[5] = { 0 }, c[5] = { 0 };
	int* answer;

	scanf("%d", &n);
	a[0] = 1;
	b[0] = 2;
	c[0] = 3;
	for (i = 0; i < n; i++) {
		scanf("%d %d %d", &score_a, &score_b, &score_c);
		a[4] += score_a;
		b[4] += score_b;
		c[4] += score_c;
		a[score_a]++;
		b[score_b]++;
		c[score_c]++;
	}
	answer = compare(compare(a, b, 4), c, 4);
	printf("%d %d", answer[0], answer[4]);
	return 0;
}
