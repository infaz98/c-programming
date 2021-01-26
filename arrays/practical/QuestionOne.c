#include <stdio.h>

//getting 5 inputs from the user and store it in array and print it
int main(){

    int userInputs[5];
    int number;

    for(int x= 0; x<5; x++){
        printf("Please enter a number: ");
        scanf("%d", &number);
        userInputs[x] = number;
    }

    printf("\nNumbers that are entered by the user: ");
    for(int y = 0; y<5; y++){
        printf("%d ",userInputs[y]);
    }
    printf("\n");
    return 0;
    
}