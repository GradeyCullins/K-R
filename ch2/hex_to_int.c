#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	char *hex = argv[1];
	printf("%d\n", (int)strtol(hex, NULL, 0));
	return 0;
}
