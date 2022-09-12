#include <stdio.h>

int main()
{
	int c, i, ARRSIZE;
	ARRSIZE = 100;
	char charr[ARRSIZE];
	i = 0;

	while ((c = getchar()) != '\n') {
		charr[i] = c;
		i++;
	}

	for (i = 0; i < ARRSIZE; i++) {
	
		if (charr[i] == ' ' &&
			charr[i + 1] == ' ' && 
			charr[i + 2] == ' '
		) {
			i += 2;
			printf("\t");	
		} else if (c != '\v') {
			printf("%c", charr[i]);
		}
	
	}
}

//OUTPUT DOES NOT SEEM CORRECT BUT IS INTENDED, GARBAGE AT END OF STRING IS WHAT IT IS.