// Break & Continue

// [42] Print Primes from a to b
// [65] number not Divisible by 3
// [77] Is prime or not

/*

continue; // used to skip to next iterration of the loop
break; // used to terminate the loop

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
    // int pocketMoney = 3000;
    // for (int date = 0; date <= 30; date++)
    // {
    //     if (date % 2 == 0)
    //     {
    //         continue;
    //     }
    //     if (pocketMoney == 0)
    //     {
    //         break;
    //     }

    //     cout << "date:" << date << endl
    //          << "Go out today" << endl;
    //     pocketMoney = pocketMoney - 300;
    // }

    // // Print Primes from a to b
    // int a, b;
    // cin >> a >> b;

    // for (int num = a; num <= b; num++)
    // {
    //     int i;
    //     for (i = 2; i < num; i++)
    //     {
    //         if (num % i == 0)
    //         {
    //             break;
    //         }
    //     }
    //     if (i == num)
    //     {
    //         cout << num << endl;
    //     }
    // }


    // // number not Divisible by 3
    // for (int i = 0; i < 100; i++)
    // {
    //     if (i % 3 == 0)
    //     {
    //         continue;
    //     }

    //     cout << i << endl;
    // }


    // Is prime or not
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

