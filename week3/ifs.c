#include <stdio.h>

int main(void)
{
    int a = 5; //means assignment
     int b = 5;
 int c = 10; //we created three variables

 printf("%d == %d is %d \n", a, b , a==b);//== means comparison

printf("%d == %d is %d \n", a, c , a==c);
//kjhfkigoisyv
printf("%d == %d is %d \n", a, c , a !=c);

//program that identifies neg numbers
int number;
printf("Enter a number: ");
scanf("%d" , &number);
if  (number < 0){ //if the number is negative then, this message will show
    printf("%d is a negative number. \n" ,number);
}
}
