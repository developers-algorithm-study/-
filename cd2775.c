#include<stdio.h>

int main() {
	double hp, def, limit, dmg, answer;

	scanf("%lf %lf %lf", &hp, &def, &limit);
	scanf("%lf", &dmg);

	answer = (1 - (100 - ((hp / limit / dmg) * 100)) / def) * 100;
	if (answer > 100) puts("X");
	else if (answer <= 0) puts("O");
	else printf("%0.6f", answer);
	return 0;
}
