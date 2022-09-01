#include <stdio.h>

int main ()
{
	int c, i, j, currentWordLength, longestWordLength, numberOfWords;
	int arr[50];

	currentWordLength = longestWordLength = numberOfWords = 0;

	//the way this is made the last word will not be included unless a trailing space or tab is added.
	
	while ((c = getchar()) != '\n') {
		currentWordLength++;
		if (c == ' ' || c == '\t') {
			arr[numberOfWords] = currentWordLength -1;
			numberOfWords++;

			if (currentWordLength > longestWordLength)
				longestWordLength = currentWordLength -1;

			currentWordLength = 0;
		}
	}

	for (i = 0; i < longestWordLength; i++) {
		for (j = 0; j < numberOfWords; j++) {
			if (arr[j] > 0) {
				printf("|");
				arr[j] = arr[j] -1;
			}
		}
		printf("\n");
	}
	//this might not be in the same order as the words are typed but i cannot be bothered to perfect this for this book.
}