#include <stdio.h>

//print numbers from one to given n numbers
int main(){

    int user_input;
    int counter = 1;

    printf("Please enter the number: ");
    scanf("%d", &user_input);

    while (counter <= user_input){
        printf("%d\n", counter);
        counter++;
    }
    

    return 0;
}