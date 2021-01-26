#include <stdio.h>

//function prototypes
void add(int numOne, int numTwo);
void subtraction(int numOne, int numTwo);
void multiplication(int numOne, int numTwo);
void division(int numOne, int numTwo);
void modulus(int numOne, int numTwo);

void add(int numOne, int numTwo){
    printf("Sum is : %d\n", numOne + numTwo);
}
void subtraction(int numOne, int numTwo){
    printf("Subtraction is : %d\n", numOne - numTwo);
}
void multiplication(int numOne, int numTwo){
    printf("Multiplication is : %d\n", numOne * numTwo);
    
}
void division(int numOne, int numTwo){
   printf("Division is : %d\n", numOne / numTwo);
}
void modulus(int numOne, int numTwo){
   printf("Modulus is : %d\n", numOne % numTwo);
}


int main(){

    int numOne, numTwo;
    char operator;
    printf("Please Enter the operator: ");
    scanf("%c", &operator);
    
    printf("Please Enter the first number: ");
    scanf("%d", &numOne);
    
    printf("Please Enter the second number: ");
    scanf("%d", &numTwo);

    switch (operator)
    {
    case '+':
        add(numOne, numTwo);
        break;
    
    case '-':
        subtraction(numOne, numTwo);
        break;
    
    case '*':
        multiplication(numOne, numTwo);
        break;
    
    case '/':
        division(numOne, numTwo);
        break;
    
    case '%':
        modulus(numOne, numTwo);
        break;
    
    default:
        printf("Invalid operator\n");
    }
    
    return 0;
}