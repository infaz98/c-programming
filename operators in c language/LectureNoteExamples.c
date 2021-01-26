#include <stdio.h>

//Function prototype
void exampleOne();
void examplTwo();
void exampleThree();
void exampleFour();
void exampleFive();
void exampleSix();
void exampleSeven();
void exampleEight();
void exampleNine();
void exampleTen();

int main(){

    exampleSix();
    
    return 0;
}

void exampleOne(){

    int a = 100;
    int b = 2;
    int c = 25;
    int d = 4;
    int result;
    result = a - b;
    printf ("a - b = %i\n", result);
    result = b * c;
    printf ("b * c = %i\n", result);
    result = a / c;
    printf ("a / c = %i\n", result);
    result = a + b * c;
    printf ("a + b * c = %i\n", result);
    printf ("a * b + c * d = %i\n", a * b + c * d);

}

void examplTwo(){

    int a = 25;
    int b = 2;
    float c = 25.0;
    float d = 2.0;
    printf ("6 + a / 5 * b = %i\n", 6 + a / 5 * b);
    printf ("a / b * b = %i\n", a / b * b);
    printf ("c / d * d = %f\n", c / d * d);
    printf ("-a = %i\n", -a);

}

void exampleThree(){

    int a = 25;
    int b = 2;
    float c = 25.0;
    float d = 2.0;
    printf ("6 + a / 5 * b = %i\n", 6 + a / 5 * b);
    printf ("a / b * b = %i\n", a / b * b);
    printf ("c / d * d = %f\n", c / d * d);
    printf ("-a = %i\n", -a);

}

void exampleFour(){

    int a = 25, b = 5, c = 10, d = 7;
    printf ("a %% b = %i\n", a % b);
    printf ("a %% c = %i\n", a % c);
    printf ("a %% d = %i\n", a % d);
    printf ("a / d * d + a %% d = %i\n",
    a / d * d + a % d);

}

void exampleFive(){

    int a = 5;
    int b = 20;
    int c = 5;
    printf( "( a < b ) = %d \n", a < b );
    printf( "( a <= b ) = %d \n", a <= b );
    printf( "( a > b ) = %d \n", a > b );
    printf( "( a >= b ) = %d \n", a >= b );
    printf( "( c == a ) = %d \n", c == a );
    printf( "( a != b ) = %d \n", a != b );

}

void exampleSix(){

    int a = 60;
    int b = 13;
    printf( "( a & b ) = %d \n", a & b );
    printf( "( a | b ) = %d \n", a | b );
    printf( "( a ^ b ) = %d \n", a ^ b );
    printf( "( ~ a ) = %d \n", ~a );
    printf( "( a << 2 ) = %d \n", a << 2);
    printf( "( a >> 2 ) = %d \n", a >> 2);

}

void exampleSeven(){

    int a = 21;
    int c =10;;
    c = a++;
    printf( "Line 1 - Value of a and c are : %d - %d\n", a, c);
    c = ++a;
    printf( "Line 2 - Value of a and c are : %d - %d\n", a, c);
    c = a--;
    printf( "Line 3 - Value of a and c are : %d - %d\n", a, c);
    c = --a;
    printf( "Line 4 - Value of a and c are : %d - %d\n", a, c); 

}

void exampleEight(){

    int a = 21;
    int c ;
    c = a;
    printf("Line 1 - = Operator Example, Value of c = %d \n", c );
    c += a;
    printf("Line 2 - += Operator Example, Value of c = %d \n", c );
    c /= a;
    printf("Line 5 - /= Operator Example, Value of c = %d \n", c );
    c = 200;
    c %= a;
    printf("Line 6 - %%= Operator Example, Value of c = %d \n", c );
    c <<= 2;
    printf("Line 7 - <<= Operator Example, Value of c = %d \n", c );
    c >>= 2;
    printf("Line 8 - >>= Operator Example, Value of c = %d \n", c );
    c ^= 2;
    printf("Line 10 - ^= Operator Example, Value of c = %d \n", c );
    c |= 2;
    printf("Line 11 - |= Operator Example, Value of c = %d \n", c );

}


void exampleNine(){

    int num;
    int flag;
    printf("Enter the Number : ");
    scanf("%d",&num);
    flag = ((num%2==0)?1:0);
    printf ("Flag value : %d \n", flag);

}


void exampleTen(){

    int num1 = 1, num2 = 2;
    int res, x, a, b;
    x = (a = 2, b = 4, a+b);
    res = (num1, num2);
    printf("%d \n", res);
    x = (a = 2, b = 4, a+b);
    printf("%d \n", x);

}