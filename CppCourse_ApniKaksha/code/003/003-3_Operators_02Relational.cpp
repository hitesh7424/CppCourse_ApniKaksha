// 2) RELATIONAL OPERATORS

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

int a = 5, b = 6;

(a==b) -> F
(a!=b) -> T
(a<b)  -> T
(a>b)  -> F
(a>=b) -> T
(a<=b) -> T

*/

// Q: Input a number n and tell whether it is equal to, less than or more than 10.

#include <iostream>
using namespace std;

void io()
{
#ifndef IN_OUT
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
}

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