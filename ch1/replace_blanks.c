#include <stdio.h>

int main() {
	char c;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			while ((c = getchar()) == ' ')
				;
			putchar(' ');
		}
		putchar(c);
	}
}
