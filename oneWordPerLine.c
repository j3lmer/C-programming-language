#include <stdio.h>

int main()
{
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t') { //Could be extended to support more 'blank' characters.
			c = '\n';			
		}
		putchar(c);
	}		
}