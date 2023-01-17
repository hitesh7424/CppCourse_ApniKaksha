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

    Explaination: The sum of elements from 2nd position to 4th position is 12.

# Brute Force:

    Find sum of all possible subarrays. If any of the sum equates to S, output the starting
    and ending index of the subarray.

    Time Complexity: O(n^2)

Optimised:

    > Keep 2 pointers start and end, and a variable currentSum sum from start to end.

    S = 5

         1 , 2 , 3 , 8
   start^ ^end                  currentSum = 1

         1 , 2 , 3 , 8
   start^     ^end              currentSum = 3

         1 , 2 , 3 , 8
   start^         ^end          currentSum = 6

         1 , 2 , 3 , 8
       start^     ^end          currentSum = 5

        start=1, end=2

        Time Complexity: O(n)


*/

#include <iostream>

int main()
{
    std::cout << "works" << std::endl;

    return 0;
}
