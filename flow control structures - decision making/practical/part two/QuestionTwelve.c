#include <stdio.h>

//odd numbers from one to fifty
int main(){

    int counter = 1;

    do{

        if(counter%2 != 0){
            printf("%d\n", counter);
        }

        counter++;

    }while(counter<=50);

    return 0;
}