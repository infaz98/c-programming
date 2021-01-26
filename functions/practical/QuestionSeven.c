#include <stdio.h>

//function prototypes
void even(int num, int userInput);
void odd(int num, int userInput);


void even(int num, int userInput){
   
    if(num <= userInput){
        if(num%2 == 0){
            printf("%d ", num);
        }

        num++;        
        //calling function itself
        even(num, userInput);
    }
}

void odd(int num, int userInput){
   
    if(num <= userInput){
        if(num%2 != 0){
            printf("%d ", num);
        }

        num++;        
        //calling function itself
        odd(num, userInput);
    }
}

int main(){

    int unserInput;
    int num = 1;

    printf("Please Enter a number: ");
    scanf("%d", &unserInput);

    printf("Even numbers between 1 to %d : ", unserInput);
    even(num, unserInput);
    
    printf("\nOdd numbers between 1 to %d : ", unserInput);
    odd(num, unserInput);
    
    printf("\n");
    return 0;
}