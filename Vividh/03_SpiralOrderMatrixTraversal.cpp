#include <iostream>
using namespace std;

/*

3 4
 1  2  3  4
10 11 12  5
 9  8  7  6

5 6
 1   2   3   4   5  6
18  19  20  21  22  7
17  28  29  30  23  8
16  27  26  25  24  9
15  14  13  12  11 10

*/

#define N 100
#define M 100

void spiral_order_matrix(int arr[N][M], int n, int m)
{
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
}

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[N][M]; // Declared 2d array

    // Taking input for 2d aray
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

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

    // int top = 0, bottom = n - 1, left = 0, right = m - 1;

    // while (top <= bottom && left <= right)
    // {
    //     for (int i = left; i <= right; i++)
    //     {
    //         cout << arr[top][i] << " top\n";
    //     }
    //     top++;

    //     for (int i = top; i <= bottom; i++)
    //     {
    //         cout << arr[i][right] << " right\n";
    //     }
    //     right--;

    //     for (int i = left; i <= right; i++)
    //     {
    //         cout << arr[bottom][i] << " bottom\n";
    //     }
    //     bottom--;

    //     for (int i = top; i <= bottom; i++)
    //     {
    //         cout << arr[i][left] << " left\n";
    //     }
    //     left++;
    // }
    spiral_order_matrix(arr, n, m);

    return 0;
}
