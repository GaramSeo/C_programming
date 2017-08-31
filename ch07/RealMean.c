#include <stdio.h>

int main (void) {
	double total = 0.0;
	double input = 0.0;
	int num = 0;

	for (num=0; input>=0.0;num++ls) {
		total += input;
		printf("input real number: \n");
		scanf("%lf", &input);
		num++;
	}
	printf("mean is : %f \n", total/(num-1));
}