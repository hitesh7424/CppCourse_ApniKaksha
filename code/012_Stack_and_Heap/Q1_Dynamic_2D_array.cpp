/***
 * Q1 Declare a 2D array Dynamically
 */

#include <iostream>
using namespace std;

int main()
{
    int m = 2, n = 3;
    int value = 0;

    int **array2D = new int *[m]; // Declare pointer array
    // Declare
    for (int i = 0; i < m; i++)
    {
        array2D[i] = new int[n];
    }

    // Traversing Dynamic 2D array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            array2D[i][j] = ++value;
        }
    }

    // Putting value in 2d array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array2D[i][j] << endl;
        }
    }

    for (int i = 0; i < m; i++)
    {
        delete[] array2D[i];
    }
    delete[] array2D;
    array2D = NULL;

    return 0;
}
