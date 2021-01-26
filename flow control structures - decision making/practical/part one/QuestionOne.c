#include <stdio.h>

//determine child or a senior citizen
int main(){

    int age; 

    printf("Please enter the age: ");
    scanf("%d", &age);

    if(age<18){
        printf("You are a Child\n");
    }else{
        printf("You are a Senior citizen\n");
    }
    return 0;
}