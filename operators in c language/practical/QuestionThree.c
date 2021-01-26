#include <stdio.h>

//kmh to mph converter
int main(){

    //one kilometer  = 0.6213 miles

    float kmh;
    float mph;

    printf("Enter kmh value: ");
    scanf("%f", &kmh);

    mph = kmh * 0.6213;
    printf("%.2f kmh is equal to %.2f mph\n", kmh,mph);

    return 0;

}