#include <stdio.h>

int main()
{
	int c, i, white, other;
	int digits[10];
	
	white = other = 0;
	for (i = 0; i < 10; i++) {
		digits[i] = 0;
	}

	while ((c = getchar()) != '\n') {
		if (c >= '0' && c <= '9') {
			digits[c - '0']++;
		}
		else if (c == ' ' || c == '\t') {
			white++;
		}
		else {
			other++;
		}
	}

	printf("digits = ");
	for (i = 0; i < 10; i++) {
		printf("%d, ", digits[i]);
	}
	printf("whitespace = %d, other = %d", white, other);
	
}