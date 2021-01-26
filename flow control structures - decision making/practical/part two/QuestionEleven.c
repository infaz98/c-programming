#include <stdio.h>

//sum of the numbers from one to given value
int main(){

    int sum = 0;
    int counter = 1;
    int user_input;

    printf("Please enter the number: ");
    scanf("%d", &user_input);

    while (counter <= user_input){
        
        sum = sum + counter;
        counter++;
    }
    
    printf("Sum of number from 1 to %d is %d\n", user_input, sum);
    return 0;
}