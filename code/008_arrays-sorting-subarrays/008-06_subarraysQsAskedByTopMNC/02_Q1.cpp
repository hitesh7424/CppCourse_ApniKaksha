/*

#? Problem:

    Print all subarrays of a given array

# Base idea:

    >   Take input of array arr[] of size N
    >   make first loop to get starting point and second nested loop to get ending point
    >   last nested loop to print all elements between starting point and ending point

Input:

    4
    -1  4  7  2

Output:

    -1
    -14
    -147
    -1472
    4
    47
    472
    7
    72
    2

*/

#include <iostream>

void allSubarray(int arr[], int size)
{
    int start = 0, end = 0;

    for (start = 0; start < size; start++)
    {
        for (end = start; end < size; end++)
        {
            for (size_t i = start; i <= end; i++)
            {
                std::cout << arr[i];
            }
            std::cout << "\n";
        }
    }
}

int main()
{
    int n;
    std::cin >> n;

    int a[n];

    for (size_t i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    allSubarray(a, n);

    return 0;
}
