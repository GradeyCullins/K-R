#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

void print_temp(void);

int main() {
	print_temp();
	return 0;
}

void print_temp() {
	float fahr; 
	printf("fahrenheit\tcelsius\n");
	for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
		printf("%3.0f\t\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr-32));
}
