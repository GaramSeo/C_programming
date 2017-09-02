#include <stdio.h>

int main (void) {
	char str[50] = "I like C programming";
	printf("string: %s\n", str );

	str[8] = '\0';
	printf("string: %s\n", str );

	str[5] = '\0';
	printf("string: %s\n", str );

	str[3] = '\0';
	printf("string: %s\n", str );
		
}