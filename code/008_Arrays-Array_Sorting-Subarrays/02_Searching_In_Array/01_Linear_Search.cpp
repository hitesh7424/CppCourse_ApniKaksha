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

    std::cout << "linearSearch :" << linearSearch(array, size, key) << std::endl;

    return 0;
}
