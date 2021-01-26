# Flow Control Structures - Decision Making  

### There are three basic types of logic, or flow of control, known as:
<ol>
<li> Sequence logic, or sequential flow</li>
<li>Selection logic, or conditional flow
<ul>
<li>Single Alternative - If statement</li>
<li>Double Alternative - If-else statement</li>
<li>Multiple Alternatives - If else-if ladder</li>
</ul>
</li>
<li>Iteration logic, or repetitive flow
<ul>
<li>Repeat-For Structure</li>
<li>Repeat-While Structure</li>
<li>Repeat-Do While Structure</li>
</ul>
</li>
</ol>
<br>

#
### Conditional flow

<li>If statement  

</li>
<br> 

~~~c
if (conditional_expression) {
   program_statements;
}
~~~
<li>If-else statement  

</li>
<br> 

~~~c
if (conditional_expression) {
   program_statements;
}else{
   program_statements; 
}
~~~
<li>If else-if ladder  

</li>
<br> 

~~~c
if (conditional_expression_one) {
   program_statements;
}else if (conditional_expression_two){
   program_statements; 
}
~~~
#
### Repetitive flow

<li>Repeat-For Structure  
<ul>
<li>for-loops are counter-controlled, meaning that they are normally used whenever the number of iterations is known in advance.</li>
</li>
</ul>
<br> 

~~~c
for (init_expression; loop_condition; loop_expression) {
  program_statements
}


 init_expression - executed before the loop starts and define some initial value 
                   that will change each time through the loop

 loop_condition - expression that determines whether the loop should continue, or stop

 loop_expression - specifies code that is executed each time through the loop, after 
                   the body of the loop is executed.
                   
~~~
<li>While Structure

</li>
<br> 

~~~c
while (conditional_expression) {
   program_statements;
}

conditional_expression - execute if it is not FALSE (non-zero)

program_statement - evaluate after the conditional_expression

The while-loop will stop only when the conditional_expression returns zero
~~~
<li>Do While Structure  

</li>
<br> 

~~~c
do{
    program_statements;
}while (conditional_expression);

another version of a while-loop that is essentially the same as a while-loop, but it reverses
the order of the program_statement and conditional_expression
~~~
