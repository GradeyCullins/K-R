#include <stdio.h>

#define MAXLINE 1000
#define TAB 8

int main() {
	char c;
	int pos = 0;
	int space;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			space = TAB - ((pos) % TAB);
			while (space > 0) {
				putchar(' ');
				++pos;
				--space;
			}
		} else if (c == '\n') {
			putchar(c);
			pos = 0;
		} else {
			putchar(c);
			++pos;
		}
	}

	return 0;
}

