#include <stdio.h>

//print the highest and lowest students marks with registration no
int main(){


    int highestMarks, lowestMarks;
    int highestMarksReg, lowestMarksReg;

    int studentMarks[5][2] = {{100,75}, {101,82}, {102,42}, {103,44}, {104,26}};

    highestMarksReg = studentMarks[0][0];
    highestMarks = studentMarks[0][1];
    
    lowestMarksReg = studentMarks[0][0];
    lowestMarks = studentMarks[0][1];
    
    for(int x = 0; x<5; x++){

        if(highestMarks<studentMarks[x][1]){

                highestMarks = studentMarks[x][1];
                highestMarksReg = studentMarks[x][0];    
        
        }else if (lowestMarks>studentMarks[x][1]){
        
                lowestMarks = studentMarks[x][1];
                lowestMarksReg = studentMarks[x][0];
        }
        
    }

    printf("Highest Marks - Registration No : %d , Marks : %d \n", highestMarksReg, highestMarks);
    printf("Lowest Marks - Registration No : %d , Marks : %d \n", lowestMarksReg, lowestMarks);
 
    return 0;
    
}