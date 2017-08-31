#include <stdio.h>

int main (void) {
	int num, abs;
	printf("input integer: \n");
	scanf("%d", &num);

	abs = num>0 ? num : num*(-1);
	printf("absoulte number : %d\n", abs);

}