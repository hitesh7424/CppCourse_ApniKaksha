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
2 3
8 9 4
7 6 5

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
    int arr[n][m]; // Declared 2d array

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

    /*

                top
            ┌───┬───┬───┐
            │ 1 → 2 → 3 │
            ├───┼───┼─↓─┤
      left  │ 8 → 9 │ 4 │   right
            ├─↑─┼───┼─↓─┤
            │ 7 ← 6 ← 5 │
            └───┴───┴───┘
                bottom

    */

    int rows = n, colms = m;

    int top = 0, bottom = rows - 1, left = 0, right = colms - 1;
    int direction = 1;

    while (top <= bottom && left <= right)
    {
        if (direction == 1)
        {

            for (int i = left; i <= right; i++)
            {
                cout << arr[top][i] << " ";
            }
            top++;
            direction = 2;
        }

        else if (direction == 2)
        {

            for (int i = top; i <= bottom; i++)
            {
                cout << arr[i][right] << " ";
            }
            right--;
            direction = 3;
        }

        else if (direction == 3)
        {

            for (int i = right; i >= left; i--)
            {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
            direction = 4;
        }

        else if (direction == 4)
        {

            for (int i = bottom; i >= top; i--)
            {
                cout << arr[i][left] << " ";
            }
            left++;
            direction = 1;
        }
    }

    return 0;
}
