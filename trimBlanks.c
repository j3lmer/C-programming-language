#include <stdio.h>

int main() 
{
	int c;

	while ((c = getchar()) != EOF) {
			if (getchar() != ' ') {
				putchar(c);
			}
	}	

}