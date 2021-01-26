#include <stdio.h>

//determine the average grade of three students
int main(){

    int M1, M2, M3;
 
    printf("Please enter the first student marks: ");
    scanf("%d", &M1);

    printf("Please enter the second student marks: ");
    scanf("%d", &M2);
    
    printf("Please enter the third student marks: ");
    scanf("%d", &M3);

    double average = (M1 + M2 + M3) / 3;
    
    if(average>=75){
        printf("Grade A\n");
    }else if(55<average && average<74){
        printf("Grade B\n");
    }else if(40<average && average<54){
        printf("Grade C\n");
    }else{
        printf("Grade F\n");
    }

    return 0;
}