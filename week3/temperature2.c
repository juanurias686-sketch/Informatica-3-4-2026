#include <stdio.h>

int main (void)
{
float celcius;

printf("Enter celcius: ");
scanf("%f", &celcius);

float farenheit = (celcius * 1.8)+32;
printf("%0.2f C°  = %0.2f F° \n" , celcius, farenheit);

if  (celcius < 0){ //if freeze cold
    printf("%.2f ❄️ Freezing weather. \n" ,celcius);
}
else if (celcius <10){ //if its cold
    printf("%.2f 🥶 Very cold weather. \n" ,celcius);
}
else if (celcius < 20){ //if its chill
    printf("%.2f 🧥 Chilly weather. \n" ,celcius);
}
else if (celcius < 30){ //if its chill
    printf("%.2f 🖼️ Normal weather. \n" ,celcius);
}
else if (celcius < 40){ //if its chill
    printf("%.2f ☀️ Hot weather. \n" ,celcius);
}
else if (celcius > 40){ //if its chill
    printf("%.2f : 🔥 Very hot weather. \n" ,celcius);

}



}












