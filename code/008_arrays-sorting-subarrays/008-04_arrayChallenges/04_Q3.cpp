// Longest Contiguous Arithmetic Subarray

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

#include <iostream>

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

int main()
{
    // std::cout << "works" << std::endl;
    int size;
    std::cin >> size;
    int array[size];

    // Input array loop =>
    for (size_t i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }

    // Exercise Functions =>
    longestContiguousArithmeticSubarray(array, size);

    return 0;
}
