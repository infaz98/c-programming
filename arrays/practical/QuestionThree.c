#include <stdio.h>

//asking user name and store it in an array and print it
int main(){

    //asking the user name lenght and create a array using the lenght
    int nameLength;
    
    printf("Please enter the name leangth including spaces: ");
    scanf("%d", &nameLength);
    
    char nameCharacters[nameLength];
    

    //storing the nume of the user in the created array
    printf("Please enter your name : ");
    for(int x = 0; x<=nameLength; x++){
        scanf("%c", &nameCharacters[x]);
    }

    //print the charachters in the array
    printf("The name you enter is");
    for(int x = 0; x<=nameLength; x++){
        printf("%c", nameCharacters[x]);
    }
    
    printf("\n");
    
    return 0;

}