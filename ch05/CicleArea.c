#include <stdio.h>

int main (void) {
	double rad;
	double area;
	printf("%s\n", "원의 반지름 입력: ");
	scanf("%1f", &rad);

	area = rad*rad* 3.1415;
	printf("%s%f\n", "원의 넓이: ", area );
	return 0;
}