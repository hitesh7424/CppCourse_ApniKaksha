// Minimum Index Of Repeating Number

/*
@1
#? Problem:

    Given an arr[] of size N. The task is to find the first repeating element in the array of
    integers, i.e., an element that occurs more than once and whose index of first occurrence is
    smallest.

# Constraints:

    1 <= N <= 10^6
    0 <= A[i] <= 10^6

# Example:

    Input:
    7
    1 5 3 4 3 5 6

    Output:
    2

    Explaination:
    5 is appearing twice and its first appearance is at index 2 is at which is less than 3
    whose first occurring index is 3.

# Base Idea:

    To check if a element is repeating, we maintain an array idx[], which stores
    the first occurrence (index) of a particular element a[i].

        > Initialise the idx[] with -1, and minidx with INT_MAX.

            -1  -1  -1  -1  -1  -1  -1  -1
            (0) (1) (2) (3) (4) (5) (6) (7)

        > Keep updating idx[], while traversing the given array.


        > At i = 0:

            Given Array: 1  5  3  4  3  5  6
                         ^

            Idx[]:   -1  0 -1 -1 -1 -1 -1 -1
                         ^
            minidx = INT_MAX

        > At i = 1:

            Given Array: 1  5  3  4  3  5  6
                            ^

            Idx[]:   -1  0 -1 -1 -1  1 -1 -1
                                     ^
            minidx = INT_MAX

        > At i = 2:

            Given Array: 1  5  3  4  3  5  6
                               ^

            Idx[]:   -1  0 -1  2 -1  1 -1 -1
                               ^
            minidx = INT_MAX

        > At i = 3:

            Given Array: 1  5  3  4  3  5  6
                                  ^

            Idx[]:   -1  0 -1  2  3  1 -1 -1
                                  ^
            minidx = INT_MAX

        > At i = 4:

            Given Array: 1  5  3  4  3  5  6
                                     ^

            Idx[]:   -1  0 -1  2  3  1 -1 -1
                               ^
            minidx = 2

        > At i = 5:

            Given Array: 1  5  3  4  3  5  6
                                        ^

            Idx[]:   -1  0 -1  2  3  1 -1 -1
                                     ^
            minidx = 1

        > At i = 6:

            Given Array: 1  5  3  4  3  5  6
                                           ^

            Idx[]:   -1  0 -1  2  3  1  6 -1
                                        ^
            minidx = 1

*/
// Code
#include <iostream>

int minIndexOfRepeatingNumber(int array[], int size);
int maxE(int arr[], int size);

int minIndexOfRepeatingNumber(int array[], int size)
{
    const int N = std::max(maxE(array, size), size) + 2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minidx = INT_MAX;
    for (size_t i = 0; i < size; i++)
    {
        if (idx[array[i]] != -1)
        {
            minidx = std::min(minidx, idx[array[i]]);
        }
        else
        {
            idx[array[i]] = i;
        }
    }

    if (minidx == INT_MAX)
    {
        return -1;
    }
    else
    {
        return minidx + 1;
    }
}

int maxE(int arr[], int size)
{
    int maxNo = INT_MIN;
    for (size_t i = 0; i < size; i++)
    {

        if (arr[i] > maxNo)
        {
            maxNo = arr[i];
        }
    }

    return maxNo;
}

int main()
{
    // std::cout << "works1\n";
    int size = 0;
    std::cin >> size;

    int array[size];

    for (size_t i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }

    int result = minIndexOfRepeatingNumber(array, size);
    std::cout << result << "\n";

    return 0;
}
