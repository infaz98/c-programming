#include <stdio.h>
#include <math.h>

//function prototypes
void circumference(float rad);
void area(float rad);

void circumference(float rad){
    printf("Circumference is %.2f\n", 2*M_PI*rad);
}

void area(float rad){
    printf("Area is %.2f\n", M_PI*rad*rad);
}

int main(){

    float unserInput;
    printf("Please Enter the radius: ");
    scanf("%f", &unserInput);
    circumference(unserInput);
    area(unserInput);

    return 0;
}