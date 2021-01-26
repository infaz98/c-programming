#include <stdio.h>

//print even numbers from one to fifty
int main(){

    int sum = 0;
    int counter = 1;

    while (counter <= 50){
        
        if(counter%2 == 0 ){
            printf("%d\n", counter);
        }

        counter++;
    }
    

    return 0;
}