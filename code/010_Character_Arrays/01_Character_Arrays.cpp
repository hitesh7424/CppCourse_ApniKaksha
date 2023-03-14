// Character Array

/**
 * @file 01_Character_Arrays.cpp
 * @date 2023-03-14
 * @brief Character Array Introduction
 *
 * # What are character arrays?
 *      > Character arrays are array of characters
 *      ┌─────┬─────┬─────┬─────┬─────┬─────┬──────┐
 *      │ 'h' │ 'i' │ 't' │ 'e' │ 's' │ 'h' │ '\0' │
 *      └─────┴─────┴─────┴─────┴─────┴─────┴──────┘
 *
 * # Declaration:
 *      char arr[n+1];
 *
 *      "hitesh\0"
 *              ^ null character
 *      "neha\0" ────────────────┬═> End
 *      "I am peaceful soul\0"───┘
 *
 */

#include <iostream>
using namespace std;

int main()
{
    // {
    //     char arr[100] = "apple";
    //     for (int i = 0; arr[i] != '\0'; i++)
    //     {
    //         cout << arr[i];
    //     }
    // }
    {
        char arr[100];
        cin >> arr;

        // cout << arr;
        cout << arr[3];
    }

    return 0;
}
