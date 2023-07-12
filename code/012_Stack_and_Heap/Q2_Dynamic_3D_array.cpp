/***
 * Q2 Declare a 3D array Dynamically
 */

#include <iostream>
using namespace std;

int main()
{
    int m = 5, n = 3, o = 4;
    int value = 10;

    int ***array3D = new int **[m];
    for (int i = 0; i < m; i++)
    {
        array3D[i] = new int *[n];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            array3D[i][j] = new int[o];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < o; k++)
            {
                array3D[i][j][k] = ++value;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < o; k++)
            {
                cout << array3D[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            delete[] array3D[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        delete[] array3D[i];
    }
    delete[] array3D;

    return 0;
}
