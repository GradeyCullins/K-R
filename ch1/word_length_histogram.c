#include <stdio.h>

#define IN  1
#define OUT 0

int main() {
	char c;
	int state = OUT;
	int count = 0;
	int i;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t' || c == '\b') {
			if (state == IN) {
				putchar(' ');
				for (i = 0; i < count; ++i)
					printf("|");
				putchar('\n');
			}
			state = OUT;
			count = 0;
		} else {
			state = IN;
			++count;
			putchar(c);
		}
	}


}
