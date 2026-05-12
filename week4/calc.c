#include <stdio.h>
//1. prototipe
void sum(void);
void less(void);
void mult(void);
void div(void);

int main(void){

   int user_response;
    printf("Calculator \n");
    printf("Select an option:\n");
    printf("1. Sum\n");
    printf("2. less\n");
    printf("3. mult\n");
    printf("4. div\n");
    scanf("%d",&user_response);


    if(user_response == 1){
        sum();
    }
    else if(user_response == 2){
        less();

    }else if(user_response == 3){
        mult();

    }else if(user_response == 4){
        div();

    }else{
        printf("You retard");

    }

}

void sum(void){

    float a;
    float b;

    printf("Enter First Number: ");
    scanf("%f" , &a);
printf("Second Number: ");
scanf("%f" , &b);
float result = a + b;
printf("Result: %.2f\n", result);
}

void less(void){

    float a;
    float b;

    printf("Enter First Number: ");
    scanf("%f" , &a);
printf("Second Number: ");
scanf("%f" , &b);
float result = a - b;
printf("Result: %.2f\n", result);
}


void mult(void){

    float a;
    float b;

    printf("Enter First Number: ");
    scanf("%f" , &a);
printf("Second Number: ");
scanf("%f" , &b);
float result = a * b;
printf("Result: %.2f\n", result);
}

void div(void){

    float a;
    float b;

    printf("Enter First Number: ");
    scanf("%f" , &a);
printf("Second Number: ");
scanf("%f" , &b);

if (b == 0){
    printf("You Retard");
}
float result = a / b;
printf("Result: %.2f\n", result);
}
