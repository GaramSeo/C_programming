#include <stdio.h>

int main (void) {
	char str[50];
	int idx=0;
	printf("input string: ");
	scanf("%s", str);
	printf("print character unit: ");

	while(str[idx] != '\0'){
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");

}