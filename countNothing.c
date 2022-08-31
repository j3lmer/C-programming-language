#include <stdio.h>

int main()
{
	int c;
	int blanks, tabs, newlines = 0;
		
	
	while ((c = getchar()) != '\n')  {

		switch (c) {
			case ' ':
				blanks++;
				break;
				
			case '\t':
				tabs++;
				break;

			case '\n':
				newlines++;
				break;
		}
	}

	printf("blanks: %d\ntabs: %d\n newlines: %d\n", blanks, tabs, newlines);
		
}