#include <stdio.h>

//Numbers between 1 and 50 which are multiple of 4
int main(){

    int counter = 1;

    do{

        if(counter%4 == 0){
            printf("%d\n", counter);
        }

        counter++;

    }while(counter<=50);

    return 0;
}