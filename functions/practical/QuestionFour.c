#include <stdio.h>

//function prototypes
int maxValue(int numOne,int numTwo,int numThree);

int maxValue(int numOne,int numTwo,int numThree){
    int max;

    //compare first two numbers
    max = numOne > numTwo ? numOne : numTwo;
    //compare max number with number three
    max = max > numThree ? max : numThree;
    
    return max;
}

int main(){

    int firstNumber, secondNumber, thirdNumber;
    int max; 

    printf("Please Enter the first number: ");
    scanf("%d", &firstNumber);

    printf("Please Enter the second number: ");
    scanf("%d", &secondNumber);

    printf("Please Enter the third number: ");
    scanf("%d", &thirdNumber);

    max = maxValue(firstNumber, secondNumber, thirdNumber);
    printf("max vlaue is %d\n", max);
    return 0;
}