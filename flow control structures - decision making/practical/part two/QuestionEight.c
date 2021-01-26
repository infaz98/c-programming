#include <stdio.h>

//factorial of the given input
int main(){

    int user_input;
    int factorial = 0;

    printf("Please enter the number: ");
    scanf("%d", &user_input);

    for(int x = user_input; x>=1; x--){
        factorial = factorial + factorial * user_input;        
    }

    printf("Factorial for the %d is %d\n",user_input, factorial);

    
    return 0;
}