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

int array_Adder(int arr[], int size)
{
    int sum = 0;
    for (size_t i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int max_Candy(int arr[], int size)
{
    int maxNo = INT_MIN;

    for (size_t i = 0; i < size; i++)
    {
        maxNo = std::max(arr[i], maxNo);
    }
    return maxNo;
}

int main()
{
    const int size = 5;
    int array[size] = {1, 2, 3, 4, 5};

    int sumOfArray = array_Adder(array, size);
    int maxCandy = max_Candy(array, size);
    std::cout << sumOfArray << std::endl;
    std::cout << max_Candy << std::endl;
    return 0;
}
