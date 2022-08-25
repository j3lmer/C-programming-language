#include <stdio.h>

#define	LOWER	0
#define UPPER	40
#define STEP	1

int toCelsius(float fahr, float celsius)
{
	fahr = LOWER;
		
	printf("%3s\t%6s\n", "Fahrenheit", "Celsius");
	
	while (fahr <= UPPER) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t\t%6.1f\n", fahr, celsius);
		fahr = fahr + STEP;
	}	
}


int toFahrenheit(float fahr, float celsius)
{
	celsius = LOWER;

	printf("%3s\t\t%6s\n", "Celsius", "Fahrenheit");

	while (celsius <= UPPER) {
		fahr = (celsius * (9.0 / 5.0)) + 32;
		printf("%3.0f\t\t%6.1f\n", celsius, fahr);
		celsius = celsius + STEP;
	}
}


int toCelsiusReverse(int fahr)
{
	printf("%3s\t%6s\n", "Fahrenheit", "Celsius");
	
	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) 
		printf("%3d\t\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32));	
}


int main()
{
	float fahr, celsius;

	toCelsius(fahr, celsius);
	printf("\n\n");
	toFahrenheit(fahr, celsius);
	printf("\n\n");
	toCelsiusReverse((int)fahr);		
	
}

