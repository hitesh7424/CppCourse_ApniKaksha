// Is prime or not

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
    int factors[n];

    int i;
    int j = 0;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            // cout << "Not Prime" << endl;
            factors[j] = i;
            j++;
            continue;
        }
    }
    if (j > 0)
    {
        cout << "Not Prime" << endl;
        cout << "factors: ";
        for (int i = 0; i < j; i++)
        {
            cout << factors[i] << " ";
        }
    }

    if (i == n & j == 0)
    {
        cout << "Prime" << endl;
    }

    return 0;
}