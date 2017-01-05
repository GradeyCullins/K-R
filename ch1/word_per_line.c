#include <stdio.h>

#define IN  1
#define OUT 0

int main() {
	char c;
	int state = OUT;
	
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t' || c == '\b') {
			if (state == IN)
				putchar('\n');
			state = OUT;
		} else {
			state = IN;
			putchar(c);
		}
	}
}
