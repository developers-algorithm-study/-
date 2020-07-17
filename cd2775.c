#include<stdio.h>

int main() {
	double hp, def, limit, dmg, min_dmg, tmp;

	scanf("%lf %lf %lf", &hp, &def, &limit);
	scanf("%lf", &dmg);

	min_dmg = hp / limit;
	if (min_dmg > dmg){
		puts("X");
	}
	else if (min_dmg <= dmg * (100 - def)) {
		puts("O");
	}
	else {
		tmp = 100 - ((min_dmg / dmg) * 100);
		if (tmp / def > 0) {
			printf("%0.6lf", (1 - tmp / def) * 100);
		}
		else {
			printf("%0.6lf", (tmp / def - 1) * 100);
		}
	}
	return 0;
}
