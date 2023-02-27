#include <stdio.h>

int main(){

	float tempC = 0.0;
	float tempF = 0.0;

	printf("Input a temperature (in C): ");
	scanf("%f", &tempC); //scan float value

	tempF = (tempC * 9 / 5) + 32; //Converts temp from C to F

	printf("%f degrees Fahrenheit. \n", tempF); //Outputs converted value

	return 0;
}
