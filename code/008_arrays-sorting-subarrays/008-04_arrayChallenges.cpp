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

#? Problem:

    An arithmetic array is an array that contains at least two integers and the deferences
    between consecutive integers are equal. For example, [9,10],[3,3,3],and [9,7,5,3] are
    arithmetic arrays, while [1,3,3,7],[2,1,2], and [1,2,4] are not arithmetic arrays.

    Sarasvati has an array of N non-negative integers. The i-th integer of the array is A(i). She
    wants to choose a contiguous arithmetic subarray from her array that has the maximum length.
    Please help her to determine the length of the longest contiguous arithmetic subarray.

*/



void generateRandomArray(int array[], int size, int min, int max);

int main()
{
    // std::cout << "works" << std::endl;
    int size = 5;
    int array[] = {1, 2, 0, 7, 2};

    // generateRandomArray(array, size, 1, 9);

    for (size_t i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl
              << std::endl;

    // maxTillI(array, size);
    sumOfSubarray(array, size);

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

void generateRandomArray(int array[], int size, int min = 0, int max = 1000)
{

    srand(time(NULL));
    for (size_t i = 0; i < size; i++)
    {
        array[i] = rand() % (max + 1);
        if (array[i] < min)
        {
            i--;
            continue;
        }

        if (i < abs(min - max) + 1)
        {

            for (size_t j = 0; j < i; j++)
            {
                if (array[i] == array[j])
                {
                    i--;
                    continue;
                }
            }
        }
    }
}
