// Two Dimentional Arrays
/*

# 2-Dimentional Array

    > later we learn this in Graphs & Dynamic Programming

## Declaration

    int arr[n][m];
    bool arr[n][m];
    char arr[n][m];
    float arr[n][m];

                   Columns -->
                   0  1  2  3  4
                ┌                ┐
              0 │  5 12 17  9  3 │
    Rows -->  1 │ 13  4  8 14  1 │         2D Array of size 5 x 5
              2 │  9  6  3  7 21 │
                └                ┘

*/

/*

Input:
3 5
5 12 17 9 3
13 4 8 14 1
9 6 3 7 21

Output:
the matrix is:
5 12 17 9 3 
13 4 8 14 1 
9 6 3 7 21

*/

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m]; // Declaring 2d array

    // Taking input for 2d aray
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Printing 2d aray
    cout << "the matrix is:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
