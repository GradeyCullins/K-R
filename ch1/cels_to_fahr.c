#include <stdio.h>

int main() {
	float celsius, fahr;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	printf("celsius\tfahrenheit\n");
	while (celsius <= upper) {
		fahr = (9*celsius/5) + 32; 
		printf("%3.0f\t\t%6.1f\n", celsius, fahr);
		celsius += step;
	}


	return 0;
}
