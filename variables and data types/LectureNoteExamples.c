#include <stdio.h>

//Function prototype
void exampleOne();
void exampleTwo();
void exampleThree();
void exampleFour();

int main(void){
	exampleFour();
}

void exampleOne(){

	int integerVar = 100;
	float floatingVar = 331.79;
	double doubleVar = 8.44e+11;
	char charVar = 'W';
	_Bool boolVar = 0;
	printf ("integerVar = %i\n", integerVar);
	printf ("floatingVar = %f\n", floatingVar);
	printf ("doubleVar = %e\n", doubleVar);
	printf ("doubleVar = %f\n", doubleVar);
	printf ("charVar = %c\n", charVar);
	printf ("boolVar = %i\n", boolVar);

}

void exampleTwo(){
	
	int units;
	char letter;
	float unit_price =12.5f;
	float amount = 0.0f;
	printf("Please enter # of units : ");
	scanf("%d", &units );
	printf("Please enter categogy id : ");
	scanf(" %c", &letter );
	amount = unit_price * units;  
}

void exampleThree(){

	short shortvar = 34;
	printf ("int shortvar = %hi\n", shortvar);
	int variable = 1590;
	printf ("int variable = %i\n", variable);
	long int factorial = 1000001L;
	printf ("long int factorial = %li\n", factorial);
	long long int maxAllowedStorage = 100000011000LL;
	printf ("long long int maxAllowedStorage = %lli\n", maxAllowedStorage);	
	unsigned int counter = 10;
	printf ("unsigned int counter = %u\n", counter);
	unsigned counter2 = 20;
	printf ("unsigned counter2 = %u\n", counter2);
	unsigned char char_counter = 'a';
	printf ("unsigned char = %u\n", char_counter);
	unsigned char_counter2 = 'A';
	printf ("unsigned char_counter2 = %u\n", char_counter2);
}

void exampleFour(){

	float value = 12.3456f;
	int number = 12;
	printf ("%.2f\n",value);
	printf ("%10.2f\n",value);
	printf ("%4i\n",number);
	printf ("%04d\n",number);
	printf ("%-20s\n","My Value");
	printf ("%10s\n","My Name");

}