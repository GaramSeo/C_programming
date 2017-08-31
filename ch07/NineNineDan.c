#include <stdio.h>

int main (void) {
	int dan = 0;
	printf("%s\n","what dan?");
	scanf ("%d", &dan);;

	for (int num=1 ; num <10; num++) {
		int result = num*dan;
		printf("%d * %d : %d\n", dan,num, result  );
	}
}