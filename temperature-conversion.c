#include <stdio.h>

int main(void)
{

float farenheit;
float celcius;

farenheit = 100;

celcius = (farenheit-32)/1.8;
printf("Enter Farenheit: ");
scanf("%f", &farenheit);

printf("%.2f F = %.2f C" , farenheit, celcius);

}
