#include <stdio.h>

//sum of odd values among given five values
int main(){

    int user_input;
    int number_of_positives = 0;
    int number_of_negatives = 0;

    for(int x = 0; x<5; x++){
        
        printf("Enter a number: ");
        scanf("%d", &user_input);

        if(user_input >  0){
            number_of_positives++;
        }else{
            number_of_negatives++;
        }

    }

    printf("Number of positive numbers: %d\n", number_of_positives);
    printf("Number of negative numbers: %d\n", number_of_negatives);

    return 0;
}   