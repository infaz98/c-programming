#include <stdio.h>

//function prototypes
void oddEven(int num);

void oddEven(int num){
    if(num % 2 == 0){
        printf("%d is even number\n", num);
    }else{
        printf("%d is odd number\n", num);
    }
}

int main(){

    int unserInput;
    printf("Please Enter a number: ");
    scanf("%d", &unserInput);
    oddEven(unserInput);
    
    return 0;
}