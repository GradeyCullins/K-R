#include <stdio.h>

int strLen(char s[]);

int main(int argc, char **argv) {

	int len = strLen(argv[1]);

	printf("%d\n", len);
	
	return 0;
}

int strLen(char s[]) {
	int i = 0;
	while (s[i++] != '\0') 
		;
	return i-1;
}
