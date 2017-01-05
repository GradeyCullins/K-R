#include <stdio.h>

int main() {
	int nb = 0;
	int nt = 0;
	int nl = 0;

	char c;

	while ((c = getchar()) != EOF) 
		switch (c) {
			case ' ':
				nb++;
				break;
			case '\t':
				nt++;
				break;
			case '\n':
				nl++;
		}

	printf("blanks: %d\ntabs: %d\nlines: %d\n", nb, nt, nl);
}
