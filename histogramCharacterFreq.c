#include <stdio.h>

int valueinarray(char val, char arr[])
{
    int i;
    for(i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if(arr[i] == val)
            return i;
    }
    return -1;
}

int main()
{
	char c;
	int i, j, k, arrayLocation, usedCounter, ARRSIZE;
	ARRSIZE = 50;
	usedCounter = 0;
	char chArr[ARRSIZE];
	int numArr[ARRSIZE];

	for (i = 0; i < ARRSIZE; i++) {
		chArr[i] = ' ';
		numArr[i] = 0;
	}

	while ((c = getchar()) != '\n') {
		if (c != ' ') {
			arrayLocation = valueinarray(c,chArr);			
			if (arrayLocation == -1) {
				chArr[usedCounter] = c;
				numArr[usedCounter]++;
				usedCounter++;
			} else {
				numArr[arrayLocation]++;
			 }	
		}
	}

	for (j = 0; j < ARRSIZE; j++) {
		if (numArr[j] != 0) {
			printf("%c", chArr[j]);
			for(k = 0; k < numArr[j]; k++) {
				printf("-");
			}
			printf("\n");
		}
	}
}
