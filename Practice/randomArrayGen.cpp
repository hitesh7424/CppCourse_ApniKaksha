#include <iostream>
#include <time.h>
#include <sstream>
#include <iomanip>
#include <string>

// int numberOfDigits(int num)
// {
//     std::stringstream ss;
//     ss << num;
//     std::string str = ss.str();
//     return str.length();
// }

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

void randomArrayGen(int array[], int size)
{

    srand(time(NULL));
    for (size_t i = 0; i < size; i++)
    {
        array[i] = rand() % size;
    }
}

void arrayPrinter(int array[], int size)
{
    // int wide = 0;
    // for (size_t i = 0; i < size; i++)
    // {
    //     if (numberOfDigits(array[i]) > wide)
    //     {
    //         wide = numberOfDigits(array[i]);
    //     }
    // }

    for (size_t i = 0; i < size; i++)
    {
        if (i == 0)
        {
            std::cout << "{" << array[i] << ", ";
        }
        else if (i == size - 1)
        {
            std::cout << array[i] << "}";
        }
        else
        {
            std::cout << array[i] << ", ";
        }
    }
    std::cout << std::endl;
}

int main()
{
    const int size = 25;
    // std::cout << "Size of array: ";
    // std::cin >> size;
    int array[size];

    randomArrayGen(array, size);
    arrayPrinter(array, size);
    bubbleSort(array, size);
    arrayPrinter(array, size);

    return 0;
}
