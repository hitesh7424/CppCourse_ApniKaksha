/*

#? Problem:

    Print largest sum of subarrays of a given array

# Base idea:

    >   take input of array arr[] of size N
    >   make a variable to store maxSum and sum
    >   use nested loops to get sum of subarray and compare it with maxSum

Input:

    4
    -1  4  7  2

Output:

    13

*/

#include <iostream>
#include <climits>

/* brute force approach */
void maxSumOfSubarrayn3(int arr[], int size) // TimeComplexity of O(n³)
{
    int maxSum = INT_MIN, currSum = 0;

    for (int start = 0; start < size; start++)
    {
        for (int end = start; end < size; end++)
        {
            currSum = 0;
            for (size_t i = start; i <= end; i++)
            {
                currSum += arr[i];
            }
            maxSum = std::max(maxSum, currSum);
        }
    }
    std::cout << maxSum << "\n";
}

/* Cumulative sum approach */
void maxSumOfSubarrayn2(int arr[], int size) // TimeComplexity of O(n²)
{
    int maxSum = INT_MIN, currSum = 0;

    // outer loop iterates through the array
    for (size_t i = 0; i < size; i++)
    {
        currSum = 0;

        // inner loop starts from current index of outer loop and iterates through the rest of the array
        for (size_t j = i; j < size; j++)
        {
            // add current element to currSum
            currSum += arr[j];
            // update maxSum if currSum is greater than maxSum
            maxSum = std::max(maxSum, currSum);
        }
    }
    // print the maximum sum
    std::cout << maxSum << "\n";
}

/* ChatGPT approach */
void maxSumOfSubarrayn(int arr[], int size) // TimeComplexity of O(n)
{
    int maxSum = INT_MIN, currSum = 0;

    for (size_t i = 0; i < size; i++)
    {
        currSum = std::max(arr[i], currSum + arr[i]);
        maxSum = std::max(maxSum, currSum);
    }

    std::cout << maxSum << "\n";
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

    // maxSumOfSubarrayn3(a, n);
    maxSumOfSubarrayn2(a, n);
    // maxSumOfSubarrayn(a, n);

    return 0;
}
