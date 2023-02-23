// Matrix Transpose

/*

#? Problem

    Given a square matrix A & its number of rows ( or columns ) N, return the
    transpose of A.
    The transpose of a matrix is the matrix flipped over it's main diagonal,
    switching the row and column indices of the matrix.


*/
/*

Input:
3 3
1 2 3
4 5 6
7 8 9

Output:

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

    // transpose code
    int transposed_arr[m][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transposed_arr[j][i] = arr[i][j];
        }
    }

    // Printing 2d aray
    // cout << "the matrix is:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << transposed_arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
