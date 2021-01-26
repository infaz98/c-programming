#include <stdio.h>
int addNumbers(int a, int b); 	//fuction prototype

int sum(int a, int b)
{
	int c = a + b;
	return c;
}

int addNumbers(int a, int b){ 	//function definition 
	
	int result;
	result = a + b;
	return result;		//return statement
}


int main()
{
	//Example one
	int var1 = 10;
	int var2 = 20;
	int var3 = sum(var1, var2);
	printf("%d\n", var3);

	//Example two
	int n1, n2, sum;
	printf("Enter two numbers");
	scanf("%d %d", &n1, &n2);
	sum = addNumbers(n1, n2);	//function call
	printf("sum = %d\n", sum);

	return 0;
}



