#include <stdio.h>

#define MAXLINE 1000

int getLine(char line[], int len);
void reverse(char s[]);

int main() {
	char line[MAXLINE];
	char c;
	int i = 0;
	int len = 0;

	while ((len = getLine(line, MAXLINE)) > 0) {
		reverse(line);
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

void reverse(char s[]) {
	char r[MAXLINE];
	int n = 0;
	int i = 0;

	for (; n < MAXLINE; ++n)
		if (s[n] == '\0')
			break;
	for (n -= 2; n >= 0; --n) 
		r[i++] = s[n];
	r[i++] = '\n';
	r[i] = '\0';
	for (i = 0; i < MAXLINE; ++i)
		s[i] = r[i];
}
