// Matrix Challenges

// Square Matrix Transpose

/*

#? Problem

    Given a square matrix A & its number of rows ( or columns ) N, return the
    transpose of A.
    The transpose of a matrix is the matrix flipped over it's main diagonal,
    switching the row and column indices of the matrix.

## Constraints

    1 <= N <= 1000

###

    Transpose of NxN matrix
      (0,1)
    1   2   3              1   4   7
    4   5   6   =>   (1,0) 2   5   8
    7   8   9              3   6   9


*/
/*

Input:
3 3
1 2 3
4 5 6
7 8 9

Output:
1 4 7 
2 5 8 
3 6 9

*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N][N]; // Declaring 2d array

    // Taking input for 2d aray
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }

    // transpose code
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // Printing 2d aray
    // cout << "the matrix is:\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
