#include <stdio.h>

int main() {
	int max = 1000;
	char line[max];
	int i = 0;
	char c;
	
	while ((c = getchar()) != EOF) {
		line[i++] = c;
		if (c == '\n') {
			line[i] = '\0';
			if (i > 80)
				printf("%s", line);
			i = 0;
		}
	}

	return 0;
}
