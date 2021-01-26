#include <stdio.h>

//check whether a given input is an vowel
int main(){

    char userInput;

    printf("Please enter the letter: ");
    scanf("%c", &userInput);
    
    switch (userInput)
    {
    case 'a':
        printf("Vowel\n");
        break;
    case 'e':
        printf("Vowel\n");
        break;
    case 'i':
        printf("Vowel\n");
        break;
    case 'o':
        printf("Vowel\n");
        break;
    case 'u':
        printf("Vowel\n");
        break;    
    default:
        printf("Not an vowel\n");
        break;
    }

    return 0;
}