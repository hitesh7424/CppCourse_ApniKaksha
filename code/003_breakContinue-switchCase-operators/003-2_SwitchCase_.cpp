// Switch Case Statements

// [42] if-else statement
// [69] switch-case Statement
// [93] Simple Calculator

/*

switch (variable)
{
case (value):
    // body
    break;

default:
    break;
}

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

int main()
{
    io();

    char button;

    cout << "Input a character: ";
    cin >> button;
    cout << endl;

    // if-else statement
    // if (button == 'a')
    // {
    //     cout << "Hello" << endl;
    // }
    // else if (button == 'b')
    // {
    //     cout << "Namaste" << endl;
    // }
    // else if (button == 'c')
    // {
    //     cout << "Salut" << endl;
    // }
    // else if (button == 'd')
    // {
    //     cout << "Hola" << endl;
    // }
    // else if (button == 'e')
    // {
    //     cout << "Ciao" << endl;
    // }
    // else
    // {
    //     cout << "I am still learning more" << endl;
    // }


    // // switch-case Statement
    // switch (button)
    // {
    // case 'a':
    //     cout << "Hello" << endl;
    //     break;
    // case 'b':
    //     cout << "Namaste" << endl;
    //     break;
    // case 'c':
    //     cout << "Salut" << endl;
    //     break;
    // case 'd':
    //     cout << "Hola" << endl;
    //     break;
    // case 'e':
    //     cout << "Ciao" << endl;
    //     break;
    // default:
    //     cout << "I am still learning" << endl;
    //     break;
    // }


    // Simple Calculator
    float n1, n2;
    cout << "Input 2 Numbers: ";
    cin >> n1 >> n2;
    cout << endl;
    int j = n1;

    char op;
    cout << "Simple Calculator" << endl
         << "functions: + - * / ^" << endl;
    cout << "Input an operator: ";
    cin >> op;
    cout << endl;

    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '/':
        cout << n1 / n2 << endl;
        break;
    case '^':
        for (int i = 1; i < n2; i++)
        {
            n1 = n1 * j;
        }
        cout << n1 << endl;
        break;
    default:
        cout << "I am still learning" << endl;
        break;
    }

    return 0;
}
