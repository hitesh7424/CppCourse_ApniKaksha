// Matrix Search

/*

#? Problem

    2D Matrix Search
    Given a nxm matrix.
    Write an algorithm to fing thant the given value exists in the matrix
    or not.
    Integers in each row are sorted in ascending from left to right.
    Integers in each column are sorted in ascending from top to bottom.

## Sample sorted case

┌             ┐
│  1  4  7 11 │
│  2  5  8 12 │
│  3  6  9 16 │
│ 10 13 14 17 │
└             ┘

## Approach

> Linear search:

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (matrix[i][j]==target)
            {
                return true;
            }
        }
    }
    return false;

    Time complexity: O(nm)


## Optimised Approach:

    1. Start from top right element.

    1. You are at (r,c)
            if(matrix[r][c] == target)
                return true
            if(matrix[r][c] == target)
                c--
            else
                r++;

*/

/*

Input:
4 4 9
1  4  7 11
2  5  8 12
3  6  9 16 
10 13 14 17 


Output:
Element Found


*/

#include <iostream>

#define N 1000

bool matrix_Search_Linear(int matrix[][N], int rows, int columns, int target)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (matrix[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

bool matrix_Search_Optimised(int matrix[][N], int rows, int columns, int target)
{
    int r = 0, c = columns - 1;
    while (c >= 0 and r < rows)
    {
        if (matrix[r][c] == target)
        {
            // std::cout << "true\n";
            return true;
        }
        if (matrix[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    return false;
}

int main()
{
    int rows, columns, target;
    std::cin >> rows >> columns >> target;

    int matrix[rows][N];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    // // Linear Search
    // if (matrix_Search_Linear(matrix, rows, columns, target))
    // {
    //     std::cout << "Element Found" << std::endl;
    // }
    // else
    // {
    //     std::cout << "Element Does Not Exists" << std::endl;
    // }

    // Optimised Search
    if (matrix_Search_Optimised(matrix, rows, columns, target))
    {
        std::cout << "Element Found" << std::endl;
    }
    else
    {
        std::cout << "Element Does Not Exists" << std::endl;
    }

    return 0;
}
