#include<stdio.h>
int main() {
	int n, i, x = 1, tmp = 0, cnt, pre = 0, post = 0;
	scanf("%d", &n);
	for (i = 1; ; i++) {
		tmp += i;
		if (tmp >= n) {
			cnt = i;
			break;
		}
	}
	for (i = cnt; i > tmp - n; i--) {
		if (cnt % 2 == 0) {
			pre = x++;
			post = i;
		}
		else {
			pre = i;
			post = x++;
		}
	}
	printf("%d/%d", pre, post);
	return 0;
}
