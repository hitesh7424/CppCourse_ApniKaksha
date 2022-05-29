// 3) LOGICAL OPERATORS

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

// Q: Write a program to output whether a number is divisible by
//    both 2 and 3 or divisible by only one of them

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
