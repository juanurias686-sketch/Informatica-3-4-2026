#include <stdio.h>

int main(void)
{

    int lenght;

    int width;
    int area;
    int perimeter;

    printf("Enter lenght: ");
    scanf("%d", &lenght);

     printf("Enter witdth: ");
    scanf("%d", &width);

    area = lenght*width;
    perimeter = 2* (lenght + width);
     printf("area: %d  perimeter: %d\n", area, perimeter);

}
