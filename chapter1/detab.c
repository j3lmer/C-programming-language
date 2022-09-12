#include <stdio.h>




int main()
{
	int c, numBetweenTabStops, counter;
	numBetweenTabStops = 4;


	counter = 0;
	while ((c = getchar()) != '\n')	{
		if (c == '\t') {
			while(counter < numBetweenTabStops) {
				printf(" ");
				counter++;
			}
			counter = 0;
		} else {
			putchar(c);
		}

		if (counter == numBetweenTabStops) {
			counter = 0;
		} else {
			counter++;
		}
	}
	return 0;
}