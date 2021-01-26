#include <stdio.h>

int main()
{

char word[] = { 'H', 'e', 'l', 'l', 'o', '!' };
int i;

for ( i = 0; i < 6; ++i ){
	printf("%c\n", word[i]);
}
	
int abc_one[2][2] = {1, 2, 3 ,4 }; /* Valid declaration*/

int abc_two[][2] = {1, 2, 3 ,4 }; /* Valid declaration*/ 

// int abc_three[][] = {1, 2, 3 ,4 }; /* Invalid declaration –you must specify second dimension*/

// int abc[_four2][] = {1, 2, 3 ,4 } /* Invalid because of the same reason  mentioned above*/14

int row, column;
int arr[4][3] = {{1,2,3}, {2,3,4}, {3,4,5}, {4,5,6}};

//traversing 2D array
for(row=0; row<4; row++){
	for(column = 0; column<3; column++){
		printf("arr[%d] [%d] = %d \n",row,column,arr[row][column]);
	}//end of the column
}//end of the row

return 0;

// https://www.programiz.com/c-programming/c-strings

}