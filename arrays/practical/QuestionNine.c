#include <stdio.h>

int main(){

    int firstMatrix[3][3];
    int secondMatrix[3][3];

    printf("\nPlease enter the first matrix\n\n");

    for(int x = 0; x<3; x++){
        for(int y = 0; y<3; y++){
            printf("Please enter the element for [%d][%d] position: ",x,y);
            scanf("%d", &firstMatrix[x][y]);
        }
    }


    printf("\nPlease enter the second matrix\n\n");

    for(int x = 0; x<3; x++){
        for(int y = 0; y<3; y++){
            printf("Please enter the element for [%d][%d] position: ",x,y);
            scanf("%d", &secondMatrix[x][y]);
        }
    }

    printf("\nSum of the matrices\n\n");

    // addition of the matrix one and two
    for(int x = 0; x<3; x++){
        for(int y = 0; y<3; y++){
            printf("%d\t" , firstMatrix[x][y]  + secondMatrix[x][y]);
        }
        printf("\n");   
    }

        return 0;
}