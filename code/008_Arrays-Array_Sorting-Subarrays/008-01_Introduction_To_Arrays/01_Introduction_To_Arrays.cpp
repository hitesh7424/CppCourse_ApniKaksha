// Introduction to Arrays

/*

# ARRAY

Array is a list of variables of similar type

✔️ {1, 2, 3, 4};
✔️ {'i', 'w', 's', 'f'}
❌ {'i', '3', 's', 'r', 4.5}

*/

/*

# Declaration

datatype arrayName[size];

int array[4] = {10, 20, 30, 40};

int => 4 bytes
array => 4x4 bytes = 16 bytes

2001 2002 2003 2004   2005 2006 2007 2008   2009 2010 2011 2012   2013 2014 2015 2016
████ ████ ████ ████   ████ ████ ████ ████   ████ ████ ████ ████   ████ ████ ████ ████

    10                    20                    30                    40
    array[0]              array[1]              array[2]              array[3]


*/

#include <iostream>

void arrayAdder(int *arr, int size);
void maxCandy(int *arr, int size);

int main()
{
    // int array[4] = {10, 20, 30, 40};
    // array[0] = 10;

    // std::cout << array[3] << std::endl;

    // int n;
    // std::cin >> n;
    // int array[n];

    // for (size_t i = 0; i < n; i++)
    // {
    //     std::cin >> array[i];
    // }

    // int minNo = INT_MAX, maxNo = INT_MIN;

    // for (size_t i = 0; i < n; i++)
    // {
    //     // if (array[i] < minNo)
    //     // {
    //     //     minNo = array[i];
    //     // }
    //     // if (array[i] > maxNo)
    //     // {
    //     //     maxNo = array[i];
    //     // }
    //     minNo = std::min(minNo, array[i]);
    //     maxNo = std::max(maxNo, array[i]);
    // }

    // for (size_t i = 0; i < n; i++)
    // {
    //     std::cout << array[i] << " ";
    // }
    // std::cout << std::endl;

    // std::cout << "max :" << maxNo << std::endl
    //           << "min :" << minNo << std::endl
    //           << "INT_MAX :" << INT_MAX << std::endl
    //           << "INT_MIN :" << INT_MIN << std::endl;

    const int size = 5;
    int array[size] = {1, 2, 3, 4, 5};

    arrayAdder(array, size);
    maxCandy(array, size);
    return 0;
}

void arrayAdder(int arr[], int size)
{
    int sum = 0;
    for (size_t i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    std::cout << "sum of array :" << sum << std::endl;
}

void maxCandy(int arr[], int size)
{
    int maxNo = INT_MIN;
    for (size_t i = 0; i < size; i++)
    {

        if (arr[i] > maxNo)
        {
            maxNo = arr[i];
        }
    }

    std::cout << "Kids with greatest number of candies : " << maxNo << std::endl;
}
