#include<stdio.h>
int main()
{
	float fahreheit,celsius;
	printf("\n Enter the temperature in fahrenheit:");
	scanf("%f",&fahreheit);
	celsius=(0.56)*(fahreheit-32);
	printf("\n Temparature in degrees celcius=%f",celsius);
	return 0;
}
