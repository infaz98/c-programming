#include <stdio.h>
#include <string.h>

//Check whether the driver is eligible for the insurens
int main(){
    
    int age;
    char gender[10]; 
    char maritalStatus[10]; 
    
    printf("Please Enter your age: ");
    scanf("%d", &age);

    printf("Please Enter your gender: ");
    scanf("%s", gender);

    printf("Please Enter your martial status: ");
    scanf("%s", maritalStatus);

    if(strcmp(maritalStatus,"married") == 0){
    
        printf("Driver is eligible for the insurens\n");
    
    }else if(strcmp(gender,"male") && strcmp(maritalStatus,"unmarried") && age>30 ){
        
        printf("Driver is eligible for the insurens\n");
    
    }else if(strcmp(gender,"female") && strcmp(maritalStatus,"unmarried") && age>25 ){
    
        printf("Driver is eligible for the insurens\n");
    
    }else
    {
        printf("Driver is not eligible for the insurens\n");
    }
    return 0;
}