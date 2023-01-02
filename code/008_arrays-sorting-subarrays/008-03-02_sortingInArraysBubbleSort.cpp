// Sorting In Arrays
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

#include <iostream>

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

int main()
{
    int size = 0;
    // std::cin >> size;
    // int array[size];

    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    size = sizeof(array) / sizeof(int);

    // for (size_t i = 0; i < size; i++)
    // {
    //     std::cin >> array[i];
    // }

    bubbleSort(array, size);

    for (size_t i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
