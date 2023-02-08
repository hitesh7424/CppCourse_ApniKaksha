/*

?# Problem

    Pair Sum Problem
    Check if there existd two elements in an array such that their sum is equal to given k

## Case:

    array = 2 4 7 11 14 16 20 21  // sorted
    key = 31

## brute force approach

    check sum of all pairs of array if it matches the key

## optimised approach

    k = 31
    using sorted array
    low = array[first_index]
    high = array[last_index]

    now we increase and decrease, low and high
    till we match the key or out of indexes

*/

#include <iostream>

/* brute force approach */
bool pairSumn2(int arr[], int size, int key) // o(n²)
{
    for (size_t i = 0; i < size - 1; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            if (arr[i] + arr[j] == key)
            {
                // std::cout<<arr[i]<<" "<<arr[j]<<"\n";
                return true;
            }
        }
    }
    return false;
}

void insertionSort(int arr[], int size) // O(n²)
{

    for (size_t i = 1; i < size; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

/* optimised approach */
bool pairSumn(int arr[], int size, int key) // O(n)
{
    insertionSort(arr, size);
    int low = 0, high = size - 1;

    while (low < high)
    {
        int sum = arr[low] + arr[high];
        if (sum == key)
        {
            // std::cout << low << " " << high << "\n";
            return true;
        }
        else if (sum > key)
        {
            high--;
        }
        else if (sum < key)
        {
            low++;
        }
    }

    return false;
}

int main()
{
    int size;
    std::cin >> size;

    int array[size];

    for (size_t i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }

    int key;
    std::cin >> key;

    std::cout << pairSumn(array, size, key) << "\n";

    return 0;
}
