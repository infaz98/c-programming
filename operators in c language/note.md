# Operators in C Language  

Operators can be categorized into three category
<ul>
<li><b>Unary operators</b></li>
<li><b>Binary operators</b></li>
<ul>
<li>Arithmetic operators</li>
<li>Relational operators</li>
<li>Logical operators</li>
<li>Bitwise operators</li>
<li>Assignment operators</li>
</ul>
<li><b>Ternary operators</b></li>
<ul>
<li>Ternary or conditional operators</li>
</ul>
</ul>
<br>  

## Operators precedence


| Category          | Operator                               | Associativity  |
|-------------------|----------------------------------------|----------------|
| Postfix           | () [] -> . ++ - -                      | Left to right  |
| Unary             | + - ! ~ ++ - - (type)* & sizeof        | Right to left  |
| Multiplicative    | * / %                                  | Left to right  |
| Additive          | + -                                    | Left to right  |
| Shift             | << >>                                  | Left to right  |
| Relational        | < <= > >=                              | Left to right  |
| Equality          | == !=                                  | Left to right  |
| Bitwise AND       | &                                      | Left to right  |
| Bitwise XOR       | ^                                      | Left to right  |
| Bitwise OR        | \|                                     | Left to right  |
| Logical AND       | &&                                     | Left to right  |
| Logical OR        | \|\|                                   | Left to right  |
| Conditional       | ?:                                     | Right to left  |
| Assignment        | = += -= *= /= %=>>= <<= &= ^= \|=      | Right to left  |
| Comma             | ,                                      | Left to right  |  

#
## Type Conversions  

<ul>
<li>Implicit Type Conversion</li>
<li>Explicit Type Conversion
<ul>
<li>Type Casting</li>
<li>String Conversion Library Functions</li>
</ul>
</li>
</ul>  

### Implicit Type Conversion  

<br>

<li>he operators we have looked at can deal with different types. For example, we can apply the addition operator <b>+</b> to an <b>int</b> as well as a <b>double</b></li>
<br>
<li>when a floating-point number is assigned to an integer value in C, the decimal portion of the number gets truncated. On the other hand, when an integer value is assigned to a floating-point variable, the decimal is assumed as .0</li>
<br> 

### Explicit Type Conversion
<br>  

#### Type Casting  
<br>
There is a mechanism in C to perform type casting, that is to force an expression to be converted to a particular type of our choosing. We surround the desired type in brackets and place that just before the expression to be coerced.
<br>  
<br>  

#### String Conversion Library Functions
<br>
<ul>
<li>There are some built-in library functions in C to perform some basic conversions between strings and numeric types
<ul>
<li><b>atoi()</b> - ASCII to an integer</li>
<li><b>atof()</b> - ASCII to floating-point</li>
</ul>
</li>
<li> We need to <b>#include</b> the library <b>stdlib.h</b> to use these functions</li>
<br>
<li>Converting numeric types to strings is a bit more difficult. First, we have to allocate space in memory to store the string. Then we use the sprintf() built-in function to “print” the numeric type into our string.</li>
</ul>
<br>

~~~c
#include <stdio.h>
#include <stdlib.h>

int main() {
    char intString[] = "1234";
    char floatString[] = "328.4";
    int myInt = atoi(intString);
    double myDouble = atof(floatString);
    printf("intString=%s, floatString=%s\n", intString, floatString);
    printf("myInt=%d, myDouble=%.1f\n\n", myInt, myDouble);

    int a = 2;
    double b = 3.14;
    char myString1[64], myString2[64];
    sprintf(myString1, "%d", a);
    sprintf(myString2, "%.2f", b);
    printf("a=%d, b=%.2f\n", a, b);
    printf("myString1=%s, myString2=%s", myString1, myString2);
    return 0;
}
~~~

<br>

### Increment and Decrement Operators  
<br>

<li>
A note of caution, you can also use these two operators differently, by putting the operator before the operand, e.g. <b>++a</b> and <b>--b</b>.
<ul>
<li>
When the operand is used <b>before</b> the operand it is called a <b>prefix operator</b>
</li>
<li>
When the operand is used <b>after</b> the operand it is called a <b>postfix operator</b>.</li>

</ul>
</li>

~~~c
c++
++c
~~~