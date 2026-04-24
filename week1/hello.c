#include <stdio.h>

int main (void)
{
    char Name[50];
    printf("what is your name: ");
    scanf("%s", &Name);
    printf("Hi %s \n", Name);


    char color[50];
    printf("What is your favorite color: ");
    scanf("%s", &color);
    printf("Your favorite color is: %s \n.", color);
}

