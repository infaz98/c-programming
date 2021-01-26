#include <stdio.h>

//function prototypes
void naturalNumber(int num, int userInput);

void naturalNumber(int num, int userInput){
   
    if(num <= userInput){
        printf("%d ", num);
        num++;

        //calling function itself
        naturalNumber(num, userInput);
    }
}

int main(){

    int unserInput;
    int num = 1;

    printf("Please Enter a number: ");
    scanf("%d", &unserInput);

    naturalNumber(num, unserInput);
    printf("\n");
    return 0;
}

/*
int main()
{
    int n;
    printf("Value: ");
    scanf("%d", &n);
    naturalNumber(n);
}


void naturalNumber(int x){
    if(x){
        naturalNumber(x -1);
    }else{
        return;
    }
        printf("%d ", x);

}
*/
