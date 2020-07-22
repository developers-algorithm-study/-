#include<stdio.h>


int main() {
	int t, a = 300, b = 60, c = 10, at, bt, ct;
	scanf("%d", &t);
	at = t / a;
	bt = t % a / b;
	ct = t % a % b / c;
	if (t % c != 0) {
		printf("%d", -1);
	}
	else {
		printf("%d %d %d", at, bt, ct);
	}
}
