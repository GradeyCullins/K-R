#include <stdio.h>

#define COUNT 128

int main() {
	char c;
	int chars[COUNT];
	int i;

	for (i = 0; i < COUNT - 1; ++i)
		chars[i] = 0;

	while ((c = getchar()) != EOF) {
		chars[c] = chars[c] + 1;
		if (c == ' ' || c == '\n' || c == '\t' || c == '\b') {
			switch (c) {
				case ' ':
					printf(" ");
					break;
				case '\n':
					printf("\\n");
					break;
				case '\t':
					printf("\\t");
					break;
				case '\b':
					printf("\\b");
					break;
			}
		} else {
			putchar(c);
		}

		putchar(' ');
		for (i = 0; i < chars[c]; ++i)
			printf("|");
		putchar('\n');
	}	
}
