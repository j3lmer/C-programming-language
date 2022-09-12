#include <stdio.h>

int main()
{
	int c, i, j, counter, maxLineLength, ARRSIZE;
	maxLineLength = 20;
	i = j = counter = 0;
	ARRSIZE = 100;
	char charr[ARRSIZE];

	while ((c = getchar()) != '\n') {
		charr[i] = c;
		i++;			
	}


	i = 0;
	while (counter < ARRSIZE) {
		if (i >= maxLineLength && (charr[j] == ' ' || charr[j] == '\t')) {
			printf("\n");
			i = -1;
		}
		
		printf("%c", charr[j]);
		i++;
		counter++;
		j++;
	}
}