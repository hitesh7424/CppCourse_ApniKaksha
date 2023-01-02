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

void generateRandomArray(int array[], int size, int min, int max);
void insertionSort(int arr[], int size);

int main()
{
    int size = 0;
    std::cin >> size;
    int array[size];

    generateRandomArray(array, size, 1, 10);

    // int array[] = {167, 949, 208, 446, 744, 566, 775, 191, 818, 153};
    // size = sizeof(array) / sizeof(int);

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
