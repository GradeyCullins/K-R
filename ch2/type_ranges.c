#include <limits.h>
#include <stdio.h>

#define UMIN 0

/* only works with limits.h found in linux (U of U cade) */

int main() {
	printf("char range: %d to %d\n", CHAR_MIN, CHAR_MAX);	
	printf("short range: %d to %d\n", SHRT_MIN, SHRT_MAX);	
	printf("int range: %d to %d\n", INT_MIN, INT_MAX);	
	printf("long range: %ld to %ld\n", LONG_MIN, LONG_MAX);	

	printf("unsigned char range: %u to %u\n", UMIN, UCHAR_MAX);
	printf("unsigned short range: %u to %u\n", UMIN, USHRT_MAX);
	printf("unsigned int range: %lu to %lu\n", UMIN, UINT_MAX);
	printf("unsigned long range: %lu to %lu\n", UMIN, ULONG_MAX);

	return 0;
}
