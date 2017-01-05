#include <stdio.h>

#define MAXLINE 1000

int getLine(char line[], int len);

int main() {
	char line[MAXLINE];
	char c;
	int i = 0;
	int len = 0;

	while ((len = getLine(line, MAXLINE)) > 0) {
		for (--len; line[len] == ' ' || line[len] == '\t'; --len)
			;
		line[++len] = '\0';
		printf("%s", line);
	}

	return 0;
}

int getLine(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
