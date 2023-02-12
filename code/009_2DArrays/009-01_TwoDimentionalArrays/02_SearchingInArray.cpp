// Searching In Array
/*

Searching In Array

*/

/*

Input 1:
3 5
5 12 17 9 3
13 4 8 14 1
9 6 3 7 21

Output 1:
the matrix is:
5 12 17 9 3
13 4 8 14 1
9 6 3 7 21
Element found at (0, 3)
Element found at (2, 0)


Input 2:
3 5
5 12 17 9 3
13 4 8 14 1
9 6 3 7 21
200

Output 2:
the matrix is:
5 12 17 9 3
13 4 8 14 1
9 6 3 7 21
Not found

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

    // Searching x in array
    int x;
    cin >> x;
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                printf("Element found at (%d, %d)\n", i, j);
                flag = true;
            }
        }
    }
    if (!flag)
    {
        cout << "Not found\n";
    }

    return 0;
}
