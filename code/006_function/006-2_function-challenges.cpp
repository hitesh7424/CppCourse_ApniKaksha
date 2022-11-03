// Function challenges

// Print all prime numbers between 2 given numbers
//  Fibonacci sequence (mātrāmeru, by Pingala)
// Factorial of a number n
// Calculate nCr
// pascal triangle with nCr (meru or meru-prastāra)


#include <iostream>
#include <cmath>
using namespace std;

// Print all prime numbers between 2 given numbers

bool isPrime(int num)
{
    if (num == 0 or num == 1)
    {
        return false;
    }

    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

void primesbetween(int a, int b)
{
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i < b; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
}

//  Fibonacci sequence (mātrāmeru, by Pingala)
void fib(int num)
{
    size_t t1, t2;
    t1 = 0;
    t2 = 1;
    cout << t1 << endl;
    for (int i = 1; i < num; i++)
    {
        if (i == 1)
        {
            cout << t2 << endl;
            continue;
        }

        size_t nextTerm = t1 + t2;
        cout << nextTerm << endl;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}

// Factorial of a number n
size_t factorial(int num)
{
    size_t facto = 1;
    for (int i = 1; i <= num; i++)
    {
        facto = facto * i;
    }
    return facto;
}

// Calculate nCr

size_t nCr(int n, int r)
{
    size_t ncr = factorial(n) / (factorial(n - r) * factorial(r));
    return ncr;
}

// pascal triangle with nCr (meru or meru-prastāra)
void pascalTriagle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int a = 5, b = 20;
    // size_t ans;
    // cin >> a;
    // cin >> b;

    // primesbetween(a, b);
    // fib(a);

    // ans = factorial(a);
    // cout << ans << endl;

    // ans = nCr(a, b);
    // cout << ans << endl;

    pascalTriagle(a);

    return 0;
}
