#include <stdio.h>

//minutes into hours and minutes
int main(){

    int minutes;
    int hours;
    int reamining_minutes;

    printf("Enter the minutes: ");
    scanf("%d", &minutes);

    hours = minutes/60;
    reamining_minutes = minutes%60;

    printf("%d minutes is equal to %d hours and %d minutes\n", minutes,hours,reamining_minutes);

    return 0;
}