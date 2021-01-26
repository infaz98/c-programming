#include <stdio.h>

//printing half pyramid downside direction
int main(){

    for(int x = 5; x>=1; x--){
        for(int y = 1; y<=x; y++){
            printf("*");
        }
        printf("\n");
    }
}