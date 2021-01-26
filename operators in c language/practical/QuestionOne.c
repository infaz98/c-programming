#include <stdio.h>
#include <math.h>


//volume of a sphere
int main(){

    float radius;
    float volume;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    volume = (radius*radius*radius)*M_PI*4/3;

    printf("Volume of the sphere is : %.2f\n", (volume));

    return 0;
}