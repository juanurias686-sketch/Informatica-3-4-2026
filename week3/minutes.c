#include <stdio.h>

int main(void)
{

int runningTime;
printf("Enter movie running time: ");
scanf("%d" , &runningTime);

int startHour;
int startMin;
printf("Start time: ");
scanf("%d:%d" , &startHour, &startMin);



int hours = runningTime/60;
int minutes = runningTime % 60;

int endHour = startHour + hours;
int endMin = startMin + minutes;


if(endMin >= 60){
    endHour = endHour + (endMin / 60);//update endhour variable

    endMin = endMin % 60; //the extra minutes will be rounded with this
    

}

printf("The movie will last %dhr and %dmin \n" , hours, minutes);


printf("End time: %d:%02d\n", endHour, endMin);


}
