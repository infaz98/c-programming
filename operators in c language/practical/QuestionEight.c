#include <stdio.h>

//sum of odd values among given five values
int main(){

    int user_input;
    int sum = 0;

    for(int x = 0; x<5; x++){
        
        printf("Enter a number: ");
        scanf("%d", &user_input);

        if(user_input%2 != 0){
            sum = sum + user_input;
        }
    }

    printf("Sum of the odd numbers among the input values is: %d\n", sum);

    return 0;
} 