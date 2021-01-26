#include <stdio.h>

//getting 5 inputs from the user and calculate the sum of the 5 numbers
int main(){

    int userInputs[5];
    int sum = 0;

    for(int x= 0; x<5; x++){
        printf("Please enter a number: ");
        scanf("%d", &userInputs[x]);
        sum = sum + userInputs[x];
    }


    printf("Sum of the given five numbers are : %d\n", sum);
    return 0;

    printf("print 5 numbers in reverse order\n");

    for(int = 4; i >= 0; i--){
        printf("Entered number: %d", userInput[i]);	
    }	


}