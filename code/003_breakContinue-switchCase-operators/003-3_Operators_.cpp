// Operators

// [085] Arithmetic Operators:
// [227] Relational Operators:
// [281] Logical Operators:
// [328] Bitwise Operator:

/*

Operators are symbols that tell the compiler to perform some specific operations.

+ - * / % ++ -- > < == >= <= !=

*/

/*

1) Arithmetic Operators:
    Binary operators: + - * / %(modulo)
    Unary operators: ++(incrementer) --(decrementer)

*/

/*

2) Relational Operators:
    Defines a relation between 2 operands
    Returns a boolean value

    == Gives true value if both operands have equal value
    != Gives true if both operands are not equal
    >  Gives true if left operand is more than the right operand
    <  Gives true if left operand is less than the right operand
    >= Gives true if left operand is more than or equal to right operand
    <= Gives true if left operand is less than or equal to right operand

*/

/*

3) Logical Operators:
    Used to connect multiple conditions/expressions
    together or to reverse logical value

    && AND gives true if both operands are true, else false
    || OR gives us true if at least one of the operands are true
    !  NOT gives the opposite logical value of the operand. True becomes false and false becomes true

    (T && F) -> F
    (5 && 0) -> F
    (5 && 1) -> T
    (T || F) -> T
    (5 || 0) -> T
    !(F)

*/

/*

4) Bitwise Operator:
    Operates on bits and performe bit-by-bit operations

    &   AND operator            0101 & 0110 = 0100
    |   OR operator             0101 | 0110 = 0111
    ^   XOR operator            0101 ^ 0110 = 0011
    ~   Ones comlement          ~ 0101 = 1010
    <<  Left shift operator     4<<1 (0100)=1000
    >>  Right shift operator    4>>1 (0100)=0010

    a<<n = a*2^n
    a>>n = a/2^n

*/

#include <iostream>
using namespace std;

void io()
{
#ifndef IN_OUT
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
}

/*
1) Arithmetic Operators:
    Binary operators + - * / %(modulo)
    Unary operators ++(incrementer) --(decrementer)

    Pre Increpemter(++a):
        Increments a instantly

            int a = 10;
            int b;

            b = ++a;

            cout <<a<<" "<<b<<endl;

            OUTPUT:
            11 11

    Post Incrementer(a++):
        Current value of a is preserverd temporarily.
        a will get incremented before next statement
        is executed.

            int a = 10;
            int b;

            b = a++;

            cout <<a<<" "<<b<<endl; // OUTPUT: 11 10

            
// Eg 1.

int main()
{
    io();

    int i = 1;

       //1    //3
    i = i++ + ++i;

    cout << i << endl; // OUTPUT: 4

    return 0;
}

// Eg 2.

int main()
{
    io();

    int i = 1;
    int j = 2;
    int k;

    // 1 //2  //1   //2    //3   //4
    k = i + j + i++ + j++ + ++i + ++j;

    cout << i << " " << j << " " << k << endl;  // OUTPUT: 3 4 13

    return 0;
}


// Eg 3.

int main()
{
    io();

    int i = 0;

    //  // 0   //0   //1   //1
    i = i++ - --i + ++i - i--;

    cout << i << endl; // OUTPUT: 0

    return 0;
}


// Eg 4.

int main()
{
    io();

    int i = 1;
    int j = 2;
    int k = 3;
    //      //1   //2   //3
    int m = i-- - j-- - k--;

    cout << i << endl; // 0
    cout << j << endl; // 1
    cout << k << endl; // 2
    cout << m << endl; // -4

    return 0;
}


// Eg 5.

int main()
{
    io();

    int i = 10, j = 20, k;

    //  //10  //9   //19  //20  //9   //20  //10  //19
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout << i << endl; // 10
    cout << j << endl; // 20
    cout << k << endl; // -20

    return 0;
}

// Eg 6.

int main()
{
    io();

    int i = 10, j = 20, k;

    //  //10  //9   //19  //20  //9   //20  //10  //19
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout << i << endl; // 10
    cout << j << endl; // 20
    cout << k << endl; //-20

    return 0;
}
*/


/*
2) Relational Operators:
    Defines a relation between 2 operands
    Returns a boolean value

    == Gives true value if both operands have equal value
    != Gives true if both operands are not equal
    >  Gives true if left operand is more than the right operand
    <  Gives true if left operand is less than the right operand
    >= Gives true if left operand is more than or equal to right operand
    <= Gives true if left operand is less than or equal to right operand


int a = 5, b = 6;

(a==b) -> F
(a!=b) -> T
(a<b)  -> T
(a>b)  -> F
(a>=b) -> T
(a<=b) -> T



// Q: Input a number n and tell whether it is equal to, less than or more than 10.

int main()
{
    io();

    int n;
    cout << "Input a Number: ";
    cin >> n;
    cout << endl;

    if (n > 10)
    {
        cout << "More than 10" << endl;
    }
    else if (n < 10)
    {
        cout << "Less than 10" << endl;
    }
    else
    {
        cout << "Equal to 10" << endl;
    }

    return 0;
}
*/


/*
3) Logical Operators:
    Used to connect multiple conditions/expressions
    together or to reverse logical value

    && AND gives true if both operands are true, else false
    || OR gives us true if at least one of the operands are true
    !  NOT gives the opposite logical value of the operand. True becomes false and false becomes true

    (T && F) -> F
    (5 && 0) -> F
    (5 && 1) -> T
    (T || F) -> T
    (5 || 0) -> T
    !(F)



// Q: Write a program to output whether a number is divisible by
//    both 2 and 3 or divisible by only one of them

int main()
{
    io();

    int n;
    cin >> n;

    if (n % 2 == 0 && n % 3 == 0)
    {
        cout << n << " is divisible by both 2 and 3" << endl;
    }
    else if (n % 2 == 0 || n % 3 == 0)
    {
        cout << n << " is divisible by only one of them" << endl;
    }
    else
    {
        cout << "Divisible by none" << endl;
    }

    return 0;
}
*/


/*
4) Bitwise Operator:
    Operates on bits and performe bit-by-bit operations

    &   AND operator            0101 & 0110 = 0100
    |   OR operator             0101 | 0110 = 0111
    ^   XOR operator            0101 ^ 0110 = 0011
    ~   Ones comlement          ~ 0101 = 1010
    <<  Left shift operator     4<<1 (0100)=1000
    >>  Right shift operator    4>>1 (0100)=0010

    a<<n = a*2^n
    a>>n = a/2^n


*/
