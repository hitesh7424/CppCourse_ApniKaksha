/**
 * @file 03_Pointers_And_Arrays.cpp
 * @date 2023-03-16
 * @brief pointers and arrays
 */

/*

# Pointers and Arrays

int arr[] = {10, 20, 30, 40};

2000   2001  2002  2003
┌─────┬─────┬─────┬─────┐
│ 10  │ 20  │ 30  │ 40  │
└─────┴─────┴─────┴─────┘
   ╿
  arr

*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40};
    cout << *arr << endl;

    int *ptr = arr;
    for (int i = 0; i < 4; i++)
    {
        // cout << *ptr << endl;
        // ptr++;

        cout << *(arr + i) << endl;
        // arr++; // illegal
    }

    return 0;
}

/*

Output:
10
10
20
30
40

*/