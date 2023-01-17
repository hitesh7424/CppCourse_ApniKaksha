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

    selectionSort(array, size);

    for (size_t i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}
