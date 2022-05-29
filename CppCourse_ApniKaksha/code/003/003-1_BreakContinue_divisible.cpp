// number not Divisible by

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

    for (int i = 0; i < 100; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }

        cout << i << endl;
    }

    return 0;
}