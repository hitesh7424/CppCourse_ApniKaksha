// Matrix Multiplication

/*

#? Problem

    Given two -Dimentional arrays of size n1xn2 and n2xn3. Your
    task is to multiply these matrices and output the multiplied
    matrix

# Constraints

    1 <= n1,n2,n3 <= 300

## Input matrix

        M1                M2
    ┌         ┐        ┌       ┐
    │ 2 4 1 2 │        │ 1 2 3 │
    │ 8 4 3 6 │        │ 4 5 6 │
    │ 1 7 9 5 │        │ 7 8 9 │
    └         ┘3x4     │ 4 5 6 │
                    └       ┘4x3


## Output matrix

# Approach

    1. Make a nested loop of order 3. In the outer loop iterate over rows of first
       matrix and in the inner loop iterate over columns of second matirx.
    2. Multiply rows of first matrix with columns of second matrix in the
       innermost loop and update in the answer matrix.

        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < n3; j++)
            {
                for (int k = 0; k < n2; k++)
                {
                    product_matrix[i][j] += (M1[i][k] * M2[k][j]);
                }
            }
        }

*/

/*

Input:
3 4 3

2 4 1 2
8 4 3 6
1 7 9 5

1 2 3
4 5 6
7 8 9
4 5 6


Output:
33 42 51 
69 90 111 
112 134 156

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    // Taking input for 2d aray
    // first matrix
    int M1[n1][n2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> M1[i][j];
        }
    }
    // second matrix
    int M2[n2][n3];
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> M2[i][j];
        }
    }
    // Initialising ans matrix with 0
    int ans[n1][n3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j] = 0;
        }
    }

    // code for matrix multiplication
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }

    // Printing 2d aray
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    
    return 0;
}
