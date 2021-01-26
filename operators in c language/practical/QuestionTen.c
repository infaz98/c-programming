#include <stdio.h>

//check whether given two number is possible to divide
int main(){

    int first_number;
    int second_number;
    
    printf("Enter the first number: ");
    scanf("%d", &first_number);

    printf("Enter the second number: ");
    scanf("%d", &second_number);
    
    if(second_number == 0){
        printf("Can't do the division\n");
    }else{
        printf("Division is : %d\n", first_number/second_number);
    }

    return 0;
}   