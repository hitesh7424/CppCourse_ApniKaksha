/**
 * @name Write a program to find two unique numbers in an array
 * where all numbers except two, are present twice
 *
 * 1. take xorsum of whole list
 * 2. get the position of setbit of xorSum
 * 3. take a newXorSum of numbers in list whose position of setbit matches with xorSum
 * 4. now xor the xorSum and newXorSum
 * 
 */

#include <iostream>
using namespace std;

bool checkBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

void Unique2(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int tempxorsum = xorsum;

    int setbit = 0;
    int pos = 0;
    while (setbit == 0)
    {
        setbit = xorsum & 1;
        xorsum = xorsum >> 1;
        pos++;
    }
    int newxorsum = 0;
    for (int i = 0; i < n; i++)
    {
        if (checkBit(arr[i], pos - 1))
        {
            newxorsum ^= arr[i];
        }
    }

    int first = newxorsum;
    int second = (tempxorsum ^ newxorsum);

    cout << first << " " << second << endl;
}

int main(int argc, char const *argv[])
{
    int arr[] = {2, 4, 6, 7, 4, 5, 6, 2};
    // int arr[] = {1, 1, 2, 2, 3, 4};
    int n = 8;

    Unique2(arr, n);

    return 0;
}
