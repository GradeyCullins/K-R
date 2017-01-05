#include <stdio.h>

#define IN  1
#define OUT 0
#define MAX 1000

int getLine(char s[], int lim);

int main() {
	char c;
	char line[MAX];
	int state = OUT;
	int len;
	int i;

	/*
	 
asdfasdfasdffsd

	 */
	
	while ((len = getLine(line, MAX)) > 0) {
		if (state == OUT) {
			--len;
			for (i = 0; i < len; ++i) {
				if (line[i] == '/' && line[i+1] == '*')
					state = IN;
				else if (line[i] == '*' && line[i+1] == '/') {
					state = OUT;
					i++;
				} else if (state == OUT)
					putchar(line[i]);
			}
			putchar('\n');
		} else {
			for (i = 0; i < len; ++i) {
				if (line[i] == '*' && line[i+1] == '/')
					state = OUT;
			}
		}
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
