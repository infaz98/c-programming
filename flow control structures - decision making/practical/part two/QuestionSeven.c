#include <stdio.h>

//sum of numbers from 1 to given input
int main(){

    int user_input;
    int sum = 0;

    printf("Please enter the number: ");
    scanf("%d", &user_input);

    for(int x = 1; x<=user_input; x++){
        sum = sum + x;
    }

    printf("sum of numbers 1 to %d is : %d\n", user_input, sum);
    return 0;
}