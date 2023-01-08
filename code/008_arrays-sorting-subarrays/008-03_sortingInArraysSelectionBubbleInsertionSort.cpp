// Sorting In Arrays
// Selection Sort

/*

What is sorting?

Arranging elements of array in ascending order

*/

/*

Selection Sort

Find the minimum element in
unsorted array and swap it
with element at begining


(unsorted) >   12, 45, 23, 51, 19,  8
                8, 45, 23, 51, 19, 12
                8, 12, 23, 51, 19, 45
                8, 12, 19, 51, 23, 45
                8, 12, 19, 23, 51, 45
(sorted)   >    8, 12, 19, 23, 45, 51


*/

#include <iostream>
void selectionSort(int arr[], int size)
{
    // int timeComplexity = 0;
    for (size_t i = 0; i < size - 1; i++)
    {
        for (size_t j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            // timeComplexity++;
        }
    }

    // std::cout << "time Complexity for size=" << size << " :" << timeComplexity << std::endl;
}

// Bubble Sort
/*

# Bubble Sort

Repeatedly swap two adjacent elements
if they are in wrong order

# १२३४५६७८९०

१.
    12, 45, 23, 51, 19, 8
    ------
    12, 23, 45, 51, 19, 8
        ------
    12, 23, 45, 51, 19, 8
            ------
    12, 23, 45, 19, 51, 8
                ------
    12, 23, 45, 19,  8, 51
                    ------

    12, 23, 45, 19,  8, 51
                        __< greatest number in the last


२.
    12, 23, 45, 19,  8, 51
    ------
    12, 23, 45, 19,  8, 51
        ------
    12, 23, 19, 45,  8, 51
            ------
    12, 23, 19, 8,  45, 51
                ------

    12, 23, 19, 8,  45, 51
                        __< spare last one as it is greatest


३.
    12, 23, 19,  8, 45, 51
    ------
    12, 19, 23,  8, 45, 51
        ------
    12, 19,  8, 23, 45, 51
            -----
    12, 19,  8, 23, 45, 51
                    __< spare last one


४.
    12, 19,  8, 23, 45, 51
    ------
    12,  8, 19, 23, 45, 51
         -----

    12,  8, 19, 23, 45, 51
                __< spare last one


५.
    8,  12, 19, 23, 45, 51
    ------

finally sorted => 8,  12, 19, 23, 45, 51

*/

void bubbleSort(int arr[], int size)
{
    int timeComplexity = 0;
    int counter = 1;
    while (counter < size - 1)
    {
        for (size_t i = 0; i < size - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
}

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

    // selectionSort(array, size);
    // bubbleSort(array, size);
    insertionSort(array, size);

    for (size_t i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}
