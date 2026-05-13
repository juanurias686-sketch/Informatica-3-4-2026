#include <stdio.h>
//1. prototipe
void c_to_f(void);
void f_to_c(void);


int main(void){

 int user_response;
    printf("Temperature Converter \n");
    printf("Select an option:\n");
    printf("1. Celciut to fahrenheit\n");
    printf("2. Fahrenheit to celcius\n");
    scanf("%d",&user_response);


    if(user_response==1){
        c_to_f();}

    else if(user_response == 2 ){

        f_to_c();}


    else{printf("you retard\n");

//call
c_to_f();
f_to_c();
}
}
//2. deff
void c_to_f(void){
float celcius;

printf("Enter celcius: ");
scanf("%f", &celcius);

float farenheit = (celcius * 1.8)+32;
printf("%0.2f C°  = %0.2f F° \n" , celcius, farenheit);
}


void f_to_c(void){

float farenheit;
float celcius;

farenheit = 100;


printf("Enter Farenheit: ");
scanf("%f", &farenheit);

celcius = (farenheit-32)/1.8;
printf("%.2f F = %.2f C" , farenheit, celcius);



}
