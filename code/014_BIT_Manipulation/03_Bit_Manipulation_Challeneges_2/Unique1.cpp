/**
 * @name Write a program to find a unique number in an array
 * where all numbers except one, are present twice
 *
 *
 */

#include <iostream>
using namespace std;

int Unique1(int arr[], int n)
{
    int uniq = 0;
    for (int i = 0; i < n; i++)
    {
        uniq ^= arr[i];
    }
    return uniq;
}

int main(int argc, char const *argv[])
{
    int arr[] = {2, 4, 6, 3, 4, 6, 2};
    int n = 7;

    cout << Unique1(arr, n) << endl;
    return 0;
}
