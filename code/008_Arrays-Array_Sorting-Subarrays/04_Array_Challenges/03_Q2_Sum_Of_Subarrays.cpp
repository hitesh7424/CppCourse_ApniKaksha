// Given an array a[] of size n. Output sum of each subarray of the given array.

#include <iostream>

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
    sumOfSubarray(array, size);

    return 0;
}