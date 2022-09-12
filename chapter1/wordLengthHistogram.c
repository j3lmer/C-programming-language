#include <stdio.h>

int main()
{
	int c, i, j, curWordLength;
	
	curWordLength = 0;
	j = 1;
	
	while ((c = getchar()) != '\n') {

		if (c == ' ' || c == '\t') {

			printf("Word %d:\n", j);		
			for (i = 0; i < curWordLength; i++) {
				printf("-");
			}
			printf("\n");
			curWordLength = 0;
			j++;
		}
		curWordLength++;
	}
}