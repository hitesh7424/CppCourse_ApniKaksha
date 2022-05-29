// Simple Calculator

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