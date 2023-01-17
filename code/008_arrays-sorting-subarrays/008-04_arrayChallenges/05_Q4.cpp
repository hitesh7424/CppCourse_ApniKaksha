// Number Of Record Breaking Days

/*

kickstart
#? Problem:

    Isyana is given the number of visitors at her local theme park on N consecutive days. The
    number of visitors on the i-th day is V[i]. A day is "record breaking" if it satisfies both
    of the following condition:
      > The number of visitors on the day is strictly larger than the number of visitors on each
        of the previous days.
      > Either it is the last day, or the number of visitors on the day is strictly larger than the
        number of visitors on the following day.

    Note that the very first day could be a record breaking day!
    Please help Isyana find out the number of record breaking days.

# Input:

    The first line of the input gives the number of test cases, T. T test cases follow. Each test
    case begins with a line containing the integer N. The second line contains N integers. The
    i-th integer is V[i].

# Output:

    For each test case, output one line containing Case #x: y, where x is the test case number
    (starting from 1) and y is the number of record breaking days.

# Constraints:

    1 sec = 10^8 operations(approx)
    20 sec = 2 x 10^9 operations(approx)

    Time limit: 20 seconds per test set
    Memory limit: 1GB
    1 <= T <= 100
    0 <= V[i] <= 10^5

    Test Set 1:
        2 <= N <= 2000

    Test Set 2:
        2 <= N <= 2 x 10^5 for most 10 test cases
        For remaining cases, 2 <= N <= 2000


Brute Force:

    1. iterate over all the elemnts and check if it is record breaking day or not.

    Note: To check of a[i] is a record breaking day, we have to iterate over a[0],a[1],....,a[i-1].

    Time complexity for this opertaion: O(n)
    Overall time complexity: O(n^2)

Optimised Approach:

    Intuition: If we can optimise step (1) then we can optimise our overall solution.

    For step (1): We need to check if a[i] > {a[i-1],a[i-2],....,a[0]}, which is same as
                                a[i] > max(a[i-1],a[i-2],....,a[0])

    For this, we will keep a variable mx, which will store the maximum value till a[i].
    then we just need to check,
            a[i] > mx
            a[i] > a[i+1], {if i+1<n}
            and update mx, mx = max(mx,a[i])

    So step (1) time complexity reduces to O(1).

            Overall Complexity: O(n)


*/

#include <iostream>

void numberOfRecordBreakingDays(int arr[], int size)
{
    int ans = 0;
    int mx = INT_MIN;

    for (size_t i = 0; i < size; i++)
    {

        mx = std::max(mx, arr[i]);

        if (mx == arr[i] && arr[i] > arr[i + 1])
        {
            ans++;
        }
    }
    std::cout << ans << std::endl;
}

int main()
{
    // std::cout << "works" << std::endl;
    int size;
    std::cin >> size;
    int array[size + 1];

    array[size] = -1;

    if (size == 1)
    {
        return 0;
    }

    // Input array loop =>
    for (size_t i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }

    // Exercise Functions =>
    numberOfRecordBreakingDays(array, size);

    return 0;
}
