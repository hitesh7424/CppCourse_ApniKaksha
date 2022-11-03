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