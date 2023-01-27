// index of subarray which adds to a given number

/*
@2
#? Problem:

    Given an unsorted array A of size N of non-negative integers, find a continous subarray
    which adds to a given number S.

# Constraints:

    1 <= N <= 10^5
    0 <= Ai <= 10^10

# Example:

    Input:
    N = 5, S=12
    A[] = {1, 2, 3, 7, 5}

    Output:2 4

    Explaination: The S of elements from 2nd position to 4th position is 12.

# Brute Force:

    Find S of all possible subarrays. If any of the S equates to S, output the starting
    and ending index of the subarray.

    Time Complexity: O(n^2)

Optimised:

    > Keep 2 pointers start and end, and a variable currentS S from start to end.

    S = 5

         1 , 2 , 3 , 8
   start^ ^end                  currentS = 1

         1 , 2 , 3 , 8
   start^     ^end              currentS = 3

         1 , 2 , 3 , 8
   start^         ^end          currentS = 6

         1 , 2 , 3 , 8
       start^     ^end          currentS = 5

        start=1, end=2

        Time Complexity: O(n)


*/

#include <iostream>
void indexOfSubarray(int a[], int n, int s)
{
    int start = -1, end = -1;
    int sum = 0;
    int i = 0, j = 0;

    while (j < n && sum + a[j] <= s)
    {
        sum += a[j];
        j++;
    }

    if (sum == s)
    {
        std::cout << i + 1 << " " << j << "\n";
        return;
    }

    while (j < n)
    {
        sum += a[j];
        while (sum > s)
        {
            sum -= a[i];
            i++;
        }
        if (sum == s)
        {
            start = i + 1;
            end = j + 1;
            break;
        }
        j++;
    }

    std::cout << start << " " << end << "\n";
}

int main()
{
    // std::cout << "works" << std::endl;

    /*
    5 12
    1 2 3 7 5


    */

    int n;
    std::cin >> n;

    int s;
    std::cin >> s;

    int a[n];

    for (size_t i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    indexOfSubarray(a, n, s);

    return 0;
}
