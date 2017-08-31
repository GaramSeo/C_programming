#include <stdio.h>

int main (void) {
	int num1 = 3, num2 = 4;
	double divResult;
	divResult = (double) num1 / num2; //type change is operated first
	printf ("the result of division: %f", divResult);
	return 0;
}