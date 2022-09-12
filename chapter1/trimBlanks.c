#include <stdio.h>

int checkCharIsWhiteSpace(char c) 
{
	switch(c) {
		case ' ':
			return 1;

		case '\t':
			return 1;

		default: 
			return 0;
	}
}

int main() 
{
	int c, prevWasNothing, curIsNothing;

	prevWasNothing = 0;
	while ((c = getchar()) != EOF) {

		curIsNothing = checkCharIsWhiteSpace(c);

		if(curIsNothing == 1) {
			if(prevWasNothing != 1) {
				putchar(c);	
			} 
			prevWasNothing = 1;
		} else {
			putchar(c);
			prevWasNothing = 0;
		}		
	}	
}