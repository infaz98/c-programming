#include <stdio.h>

//function prototypes
void squareNumber(int num);

void squareNumber(int num){
    printf("Square of the %d is %d\n", num, num*num);
}

int main(){

    int unserInput;
    printf("Please Enter a number: ");
    scanf("%d", &unserInput);
    squareNumber(unserInput);
    
    return 0;
}