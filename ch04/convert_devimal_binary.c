#include <stdio.h>

int main () {
	int decimal = 13;
	int binary[20] = {0, };

	int position = 0;
	while (1)
	{
		binary[position] = decimal%2;
		decimal = decimal / 2;
		if (decimal == 0)
			break;
		
		position++;
	}

	for (int i = position; i>=0; i--){
		printf("%d",binary[i] );
	}
	printf("\n");
}