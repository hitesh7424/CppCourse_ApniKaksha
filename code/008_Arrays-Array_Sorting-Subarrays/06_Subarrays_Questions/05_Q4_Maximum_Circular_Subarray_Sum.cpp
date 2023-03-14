/*

?# Problem

    Maximum Circular Subarray Sum

## Case:

    case I  = {-1, 4, -6, 7, 5, -4}  => kadane's algorithm
    case II = {4, -4, 6, -6, 10, -11, 12}



*/

#include <iostream>

int kadeneAlgo(int arr[], int size)
{
    int maxSum = INT_MIN, currentSum = 0;

    for (size_t i = 0; i < size; i++)
    {
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        currentSum += arr[i];
        maxSum = std::max(maxSum, currentSum);
    }
    return maxSum;
}

void maxSumOfCircularSubarrayn(int arr[], int size) // TimeComplexity of O(n)
{
    int wrapSum;
    int nonWrapSum;

    nonWrapSum = kadeneAlgo(arr, size);

    int totalSum = 0;
    for (size_t i = 0; i < size; i++)
    {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }

    wrapSum = totalSum + kadeneAlgo(arr, size);

    std::cout << std::max(wrapSum, nonWrapSum) << "\n";
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

    maxSumOfCircularSubarrayn(a, n);

    return 0;
}
