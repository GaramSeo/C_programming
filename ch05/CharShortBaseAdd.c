//SizeOfOperator.c
#include <stdio.h>

int main (void) {
	char num1 = 1, num2 = 2, result1 = 0;
	short num3=300, num4 = 400, result2 = 0;

	printf("%s \t %d %s %d\n"," the size of num1 & num2: ",sizeof(num1), ", ", sizeof(num2));
	printf("%s \t %d %s %d\n"," the size of num3 & num4: ",sizeof(num3), ", ", sizeof(num4));
	printf("%s \t %d %s %d\n"," the size of char add: ",sizeof(num1+num2);
	printf("%s \t %d %s %d\n"," the size of short add: ",sizeof(num3+num4);

	result1 = num1+num2;
	result2 = num3+num4;
	printf("%s %d %s %d\n", "size of result1 & size of result2: ", sizeof(result1), ", ", sizeof(result2));
}