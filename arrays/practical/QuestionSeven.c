#include <stdio.h>

//function proto type
void methodOne();
void methodTwo();


//printing the array without storing the vlaue
void methodOne(){
    
    for(int x = 0; x<3; x++){
        for(int y = 0; y<3; y++){
       
            if(x!=y){
                printf("%d ", 0);
            } else {
                printf("%d ", 1);
            }
        }
        printf("\n");
    }
}

//printing the array with storing the vlaue
void methodTwo(){
    
    int matrix[3][3] = {{1,0,0},{0,1,0},{0,0,1}};

    for(int x = 0; x<3; x++){
        for(int y = 0; y<3; y++){
       
            printf("%d ", matrix[x][y]);

        }
        printf("\n");
    }

        
}

int main(){

//print 3 * 3 unit matrix

    methodOne();
    
    printf("\n");
    
    methodTwo();


    return 0;    
}