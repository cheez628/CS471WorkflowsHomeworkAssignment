#include <stdio.h>

int main(){

	float tempC = 0.0;
	float tempF = 0.0;

	printf("Input a temperature (in C): ");
	scanf("%f", &tempC);

	tempF = (tempC * 9 / 5) + 32;

	printf("%f degrees Fahrenheit. \n", tempF);

	return 0;
}
