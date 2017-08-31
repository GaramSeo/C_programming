//SizeOfOperator.c
#include <stdio.h>

int main (void) {
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("%s \t %d \n"," the size of ch: ",sizeof(ch));
	printf("%s \t %d\n"," the size of inum: ",sizeof(inum));
	printf("%s \t %d\n"," the size of dnum: ",sizeof(dnum));
	
	printf("%s \t %d\n"," the size of char: ",sizeof(char));
	printf("%s \t %d\n"," the size of int: ",sizeof(int));
	printf("%s \t %d\n"," the size of long: ",sizeof(long));
	printf("%s \t %d\n"," the size of long long: ",sizeof(long long));
	printf("%s \t %d\n"," the size of float: ",sizeof(float));
	printf("%s \t %d\n"," the size of double: ",sizeof(double));

		
}