// Function
// Syntax
// to call any function
// Concept of Call Stack
// Write a function to add 2 integers

/*

// Function
// A FUNCTION is a piece of code that performsa specific tasks


// Why are functions needed, exactly?

1. Rather than repeatedly creating the same code, we build a function
   and call it everywhere the same function is needed in software.
   As a result, code redundancy is decreased.
2. Functions make code maintenance simpler since we just need to alter
   one location if the functionality changes in the future.
3. Functions improve the readability and comprehension of code.
*/

/*
// Syntax

returnType functionName(parameter1, parameter2, .....){
    // function Body
}

int main(){
    functionName(parameters);
}


@returnType
The data type of the variable that a function returns is its return type.
For instance, if we build a function that adds two integers and returns
the result, the function's return type will be "int" because the result
is an integer value.
The return type of a function is "void" when it doesn't return any results.

@functionName
It is the unique name of that fuction.
It is usually best to define a function before using it.

@parameters
A function can take some parameters as inputs. These parameters are
specified along with their data types.
For eg. if we are writig a function to add 2 integers, the parameters
would be passed like-
    int add(int num1, int num2)

// Main function
The Main function is a special function as the computer starts running the
code from beginning of the main function. Main function serves as the entry point
for the program.

// int add(int num1, int num2)
// {
//     int sum = num1 + num2;
//     return sum;
// }

*/
/*
// to call any function

int abc()
{
    return 0;
}

int main()
{
    abc(); // called a function abc()
    return 0;
}

*/
/*

// 1. Only names of variable are passed and not their types while callig a function
// 2. we pass the values, not the variables themselves. Local variables are
//    creater in functions are destroyed on returnig from them
// 3. A fucntion can be called from any function or main function.

*/
/*

// Concept of Call Stack
Memory, Memory assigned, stack, call stack,stack frame,
active frame, pushed, popped, first come first go

*/

#include <iostream>
using namespace std;

// Write a program to add 2 numbers using functions.
int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

// Write a program to print a given number using functions.
void display(int num)
{
    cout << num << endl;
}

int main()
{
    int a = 2;
    int b = 3;
    cout << add(a, b) << endl;
    display(a);
    return 0;
}