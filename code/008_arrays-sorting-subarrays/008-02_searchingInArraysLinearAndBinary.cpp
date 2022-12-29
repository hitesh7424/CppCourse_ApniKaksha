// Searching In Arrays
// Linear and Binary Search

/*

# Linear Search

{ 12, 18, 20, 42, 8, 10}
key = 8;

searching one by one
if it matches returns the index

Time Complexity : O(size Of Array)

*/

#include <iostream>

int linearSearch(int arr[], int size, int key)
{
    // Time Complexity : O(n)
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

/*

# Binary Search

key = 27

{ 8, 10, 12, 21, 27, 34, 42}

> works with sorted array
> works by repeatedly divide search space in half
    until key is found or not available in the array
> Time Complexity : O(log2(n))

Time Complexity of Binary Search:

    After 1st iteration, length of array => n
    After 2st iteration, length of array => n/2
    After 3st iteration, length of array => n/(2*2) = n/(2^2)
    After kth iteration, length of array => n/(2^k)

    Let the length of array become 1 after k iteration
    n/(2^k) = 1
        n = 2^k
        log2(n) = log2(2^k)
        log2(n) = k * log2(2)
        log2(n) = k

        k = log2(n)

    Hence, Time Complexity : k = log2(n)


*/

/*
# Conclusion

Binary search is more efficient than Linear Search
as it takes less time

log2(n) << n


*/

int binarySearch(int arr[], int size, int key)
{

    // Time Complexity : O(log2(n))
    int s = 0, e = size;

    while (s <= e)
    {

        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int size;
    // std::cout << "Enter size of array" << std::endl;
    std::cin >> size;
    int array[size];
    // std::cout << "Enter elements of array" << std::endl;

    for (size_t i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }

    int key;
    // std::cout << "Enter key" << std::endl;
    std::cin >> key;

    std::cout << linearSearch(array, size, key) << std::endl;
    std::cout << binarySearch(array, size, key) << std::endl;

    return 0;
}
