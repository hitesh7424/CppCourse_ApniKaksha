// Sorting In Arrays
// Insertion Sort

/*
# Insertion Sort

Insert an element from unsorted array
to its correct position in sorted array


     __
 12, 45, 23, 51, 19, 8
    _   <__
 12, 45, 23, 51, 19, 8
             __
 12, 23, 45, 51, 19, 8
    _           <__
 12, 23, 45, 51, 19, 8
_                   <_
 12, 19, 23, 51, 45, 8

sorted => 8, 12, 19, 23, 51, 45


*/
#include <iostream>

void insertionSort(int arr[], int size)
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

int main()
{

    int size = 0;
    // std::cin >> size;

    // int array[size];

    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    size = sizeof(array) / 4;

    // for (size_t i = 0; i < size; i++)
    // {
    //     std::cin >> array[i];
    // }

    insertionSort(array, size);

    for (size_t i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}
