#include <stdio.h>

//highest number among given three numbers
int main(){

    int first_number;
    int second_number;
    int third_number;
    int highest_number;

    printf("Enter the first number: ");
    scanf("%d", &first_number);

    printf("Enter the second number: ");
    scanf("%d", &second_number);
    
    printf("Enter the third number: ");
    scanf("%d", &third_number);
    
    if(first_number > second_number && first_number > third_number){
        highest_number = first_number;
    }else if (second_number > first_number && second_number > third_number){
        highest_number = second_number;
    }else{
        highest_number = third_number;
    }
    
    printf("Highets number is %d\n", highest_number);
    
    return 0;

}   