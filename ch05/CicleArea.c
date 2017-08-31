#include <stdio.h>

int main (void) {
	double rad;
	double area;
	printf("%s\n", "the radius: ");
	scanf("%lf", &rad);

	area = rad*rad* 3.1415;
	printf("%s%f\n", "the area of cicle : ", area );
	return 0;
}