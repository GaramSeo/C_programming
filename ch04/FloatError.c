//FloatError.c
#include <stdio.h>

int main (void) {
	int i;
	float num = 0.0;

	for (i = 0; i<100; i++) {
		num+=0.1;
		printf("%s\t%f\n","the result of 100times plus of 0.1: ",num);
	}
	return 0;
}