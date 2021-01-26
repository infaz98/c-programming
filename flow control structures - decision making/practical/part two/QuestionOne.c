#include <stdio.h>

//Display the numbers from 1 to given input
int main(){

    int user_input;

    printf("Please enter a number: ");
    scanf("%d", &user_input);

    for(int x = 1; x<=user_input; x++){
        printf("%d\n", x);
    }

    return 0;
}