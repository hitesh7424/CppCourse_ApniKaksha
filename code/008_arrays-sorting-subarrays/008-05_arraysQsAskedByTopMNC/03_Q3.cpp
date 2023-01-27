/*

Problem:

    You are given an array arr[] of N integers including 0. The task is to find the smallest
    positive number missing from the array.


Constraints:

    1 <= N <= 10^6
    -10^6 <= Ai <= 10^6


Example:

    0 -9  1  3 -4  5

    her first positive missing number is 2


Base Idea:

    >   Build a boolean check[] array that will depict if any element x is present in the array or
        not

                F  F  F  F  F  F

    >   Iterate over the array and mark non-negative a[i] as True.
        Given Array: 0 -9  1  3 -4  5

    >   at i = 0 to 5:
        Given Array: 0  -9   1   3  -4   5
                     ^
            check[]: T   F   T   T   F   T
                    (0) (1) (2) (3) (4) (5)

    >   Now, we iterate over check[] to find the index of 1st positive value.

             T   T   F   T   F   T
            (0) (1) (2) (3) (4) (5)
                     ^

                    Ans = 2


*/

#include <iostream>

void missingFirstPositiveNumber(int arr[], int size)
{
    const int N = (int)(1e6 + 2);
    bool check[N];

    for (size_t i = 0; i < N; i++)
    {
        check[i] = false;
    }

    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
        {
            check[arr[i]] = true;
        }
    }

    int ans = 0;
    while (ans < N)
    {
        if (check[ans] == false)
        {
            std::cout << ans << "\n";
            break;
        }
        ans++;
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

    missingFirstPositiveNumber(a, n);

    return 0;
}
