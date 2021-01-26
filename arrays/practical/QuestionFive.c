#include <stdio.h>

//finding the maximum and minimum number of a given array and print it 
int main(){

    int arr[5];

    for(int y = 0; y<5; y++){
        printf("Please enter a number: ");
        scanf("%d", &arr[y]);
    }    

    int max = arr[0];
    int min = arr[0];

    for(int x = 0; x<5; x++){
        if(arr[x] > max){
            max = arr[x];
        }else if(arr[x] < min){
            min = arr[x];
        }
    }

    printf("\nMaximum number is : %d\n", max);
    printf("Minimum number is : %d\n", min);
    
    return 0;

}