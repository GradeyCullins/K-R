#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char s[], int l, int r);

int main() 
{
	char s[] = "racecar";
	reverse(s, 0, strlen(s) - 1);
	printf("%s\n", s);
	return 0;
}

void reverse(char s[], int l, int r)
{
	if (l >= r) {
		return;
	}
	int temp = s[r];
	s[r] = s[l];
	s[l] = temp;
	reverse(s, ++l, --r);	
}
