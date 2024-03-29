// Searching In Arrays
// Binary Search

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

#include <iostream>

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

    std::cout << "binarySearch :" << binarySearch(array, size, key) << std::endl;

    return 0;
}
