#include <stdio.h>

//printing number pattern
int main(){

    for(int x = 6; x>=1; x--){
        for(int y = 1; y<=x; y++){
            printf("%d", x);
        }
        printf("\n");
    }
}