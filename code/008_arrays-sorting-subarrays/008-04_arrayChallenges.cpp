// Array Challenges

/*

# Subarray & Subsequence

## Subarray

    Contiuous part of the arra.

    1 2 0 7 2 0 2

    1       2 0 2

      2 0 7 <= subarray
    1
    1 2
          7 2 0 2

    Number of subarrays of an array with n elements = nC2 + n = n*(n + 1)/2


## Subsequence

    A subsequence is a sequence that can be derived an array by
    selecting zero or more elements, without changing the order
    of the remaining elements.

        1 2 0 7 2 0 2

        1   0     0 2

          2 7 2 <= subsequence


    Number of subsequences of an array with n elements = 2^n

### QUOTE

    Every Subarray is a Sequence but
    Every Subsequence is not a Subarray.

     ___________________________
    | Subsequence               |
    |           ____________    |
    |          |  Subarray  |   |
    |          |____________|   |
    |___________________________|

*/

#include <iostream>

// Max till i
void maxTillI(int array[], int size);

// Given an array a[] of size n. Output sum of each subarray of the given array.
void sumOfSubarray(int array[], int size);

/*

kickstart
#? Problem:

    An arithmetic array is an array that contains at least two integers and the deferences
    between consecutive integers are equal. For example, [9,10],[3,3,3],and [9,7,5,3] are
    arithmetic arrays, while [1,3,3,7],[2,1,2], and [1,2,4] are not arithmetic arrays.

    Sarasvati has an array of N non-negative integers. The i-th integer of the array is A[i]. She
    wants to choose a contiguous arithmetic subarray from her array that has the maximum length.
    Please help her to determine the length of the longest contiguous arithmetic subarray.

# Input:

    The first line of the input gives the number of test cases, T.T test cases follow. Each test
    case begins with a line containing the integer N. The second line contains N integers. The
    i-th integer is A[i].

# Output:

    For each test case, output one line containing Case #x: y, where x is the test case number
    (starting from 1) and y is the length of the longest contiguous arithmetic subarray.

# Constraints:

    1 sec = 10^8 operations(approx)
    20 sec = 2 x 10^9 operations(approx)

    Time limit: 20 seconds per test set
    Memory limit: 1GB
    1 <= T <= 100
    0 <= A[i] <= 10^9

    Test Set 1:
        2 <= N <= 2000

    Test Set 2:
        2 <= N <= 2 x 10^5 for most 10 test cases
        For remaining cases, 2 <= N <= 2000

# Intuition and Approach:

    > Loop over the array and find the answer

    Maintain the following variable:
        1. Previous Common Deference (pcd)
        2. Current Arithmetic Subarray length (curr)
        3. Max arithmetic subarray (ans)

*/

void longestContiguousArithmeticSubarray(int array[], int size)
{
    int pcd;
    int curr = 2;
    int ans = INT_MIN;
    // int timeComplexity = 0; // O(N)

    for (size_t i = 1; i < size - 1; i++)
    {
        // timeComplexity++;
        pcd = array[i - 1] - array[i];

        if ((array[i] - array[i + 1]) == pcd)
        {
            curr++;
            // std::cout << curr << " : " << pcd << std::endl;
        }
        else
        {
            curr = 2;
            pcd = (array[i] - array[i + 1]);
        }
        ans = std::max(curr, ans);
    }
    // std::cout << timeComplexity << std::endl;
    std::cout << ans << std::endl;
}

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

    // Print array loop =>
    // for (size_t i = 0; i < size; i++)
    // {
    //     std::cout << array[i] << " ";
    // }
    // std::cout << std::endl;

    // Exercise Functions =>
    // maxTillI(array, size);
    // sumOfSubarray(array, size);
    // longestContiguousArithmeticSubarray(array, size);
    numberOfRecordBreakingDays(array, size);

    return 0;
}

void maxTillI(int array[], int size)
{
    int mx = INT_MIN;
    for (size_t i = 0; i < size; i++)
    {
        if (mx < array[i])
        {
            mx = array[i];
        }
        std::cout << mx << std::endl;
    }
}

void sumOfSubarray(int array[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        int sum = 0;
        for (size_t j = i; j < size; j++)
        {

            sum += array[j];
            std::cout << sum << std::endl;
        }
    }
}
