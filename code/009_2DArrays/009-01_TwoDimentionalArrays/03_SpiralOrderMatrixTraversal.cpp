// Spiral Order Matrix Traversal
/*

# Spiral Order Matrix Traversal

┌───┬───┬───┬───┬───┬───┐
│  1│  5│  7│  9│ 10│ 11│
├───┼───┼───┼───┼───┼───┤
│  6│ 10│ 12│ 13│ 20│ 21│
├───┼───┼───┼───┼───┼───┤
│  9│ 25│ 29│ 30│ 32│ 41│
├───┼───┼───┼───┼───┼───┤
│ 15│ 55│ 59│ 63│ 68│ 70│
├───┼───┼───┼───┼───┼───┤
│ 40│ 70│ 79│ 81│ 95│105│
└───┴───┴───┴───┴───┴───┘

## What is Spiral Order Matrix Traversal

    >go in spiral

    ┌───┬───┬───┐
    │ 1 → 2 → 3 │
    ├───┼───┼─↓─┤
    │ 8 → 9 │ 4 │
    ├─↑─┼───┼─↓─┤
    │ 7 ← 6 ← 5 │
    └───┴───┴───┘




*/
// ─ │ ┌ ┐ └ ┘ ├ ┤ ┬ ┴ ┼ ← ↑ → ↓ ↴ ↵ ↰ ↱ ↲ ↳

/*

Input 1:
3 5
5 12 17 9 3
13 4 8 14 1
9 6 3 7 21


Output 2:


Input 1:
5 6
  1   5   7   9  10  11
  6  10  12  13  20  21
  9  25  29  30  32  41
 15  55  59  63  68  70
 40  70  79  81  95 105

Output 2:

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

    // // Printing 2d aray
    // cout << "the matrix is:\n";
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << "\n";
    // }


    int row_start = 0, row_end = n - 1, column_start = 0, column_end = m - 1;

    while (row_start <= row_end && column_start <= column_end)
    {
        // for row_start
        for (size_t col = column_start; col <= column_end; col++)
        {
            cout << arr[row_start][col] << " ";
        }
        row_start++;

        // for column_end
        for (size_t row = row_start; row <= row_end; row++)
        {
            cout << arr[row][column_end] << " ";
        }
        column_end--;

        // for row_end
        for (size_t col = column_end; col >= column_start; col--)
        {
            cout << arr[row_end][col] << " ";
        }
        row_end--;

        // for column_start
        for (size_t row = row_end; row >= row_start; row--)
        {
            cout << arr[row][column_start] << " ";
        }
        column_start++;
    }

    return 0;
}
