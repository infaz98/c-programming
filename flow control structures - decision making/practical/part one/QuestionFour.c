#include <stdio.h>

//simple calculator
int main(){

    char operator;
    int numberOne, numberTwo;

    printf("Please enter the first number: ");
    scanf("%d", &numberOne);
    
    printf("Please enter the second number: ");
    scanf("%d", &numberTwo);
    
    printf("Please select the operator: ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        printf("Sum is %d\n", numberOne + numberTwo);
        break;
    case '-':
        printf("Difference is %d\n", numberOne - numberTwo);
        break;
    case '*':
        printf("Product is %d\n", numberOne * numberTwo);
        break;
    case '/':
        printf("Quotient is %d\n", numberOne / numberTwo);
        break; 
    case '%':
        printf("Remainder is %d\n", numberOne % numberTwo);
        break;      
    default:
        printf("Invalid Selection");
 
    }
    return 0;
}


//Add the flaws found during the build 
