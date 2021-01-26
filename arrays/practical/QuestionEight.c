#include <stdio.h>

//Enter and print students Maths, Science and English Marks
int main(){

    /*
    First column  - Registration Number
    Second column - Mathematics  Marks
    Third column  - Science Marks
    Fourth column - English Marks
    */

    int studentMarks[5][4];
   
    printf("\n--Please enter the marks and registrstion number of five students--\n\n");
   
    for(int x = 0; x<5; x++){

            printf("Please enter the Registration No:   ");
            scanf("%d", &studentMarks[x][0]);

            printf("Please enter the Mathematics Marks: ");
            scanf("%d", &studentMarks[x][1]);

            printf("Please enter the Science Marks:     ");
            scanf("%d", &studentMarks[x][2]);

            printf("Please enter the English Marks:     ");
            scanf("%d", &studentMarks[x][3]);        
        
            printf("\n");
    }
   
   printf("Output\n");
   printf("\nRegistration No \tMathematics\t\tScience  \t \tEnglish \n");
   

    for(int x = 0; x<5; x++){
        for(int y = 0; y<4; y++){
            printf("%d \t\t\t", studentMarks[x][y]);
     }
        printf("\n");
    }
   
    return 0;
    
}
