#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

typedef vector<vector<int> > Matrix;

void matrixPrinter(Matrix &matrix, int m, int n, int width);
int matrixInputAndMaxWidth(Matrix &matrix, int m, int n);
bool nullMatrixChecker(Matrix &matrix, int m, int n);

int main()
{
    int m, n;
    cin >> m >> n;

    Matrix matrix(m, vector<int>(n, 0));

    int width = matrixInputAndMaxWidth(matrix, m, n);

    matrixPrinter(matrix, m, n, width);

    char result[][5] = {"✗", "✓"};

    {
        bool flag = 0;
        // property lister

        /*
        0. Order m X n
        1. Null matrix
        2. Row matrix
        3. Column matrix
        4. Square matrix
        */
        {
            cout << "\nProperties of given matrix:" << endl;
        }
        {
            // Order = m X n
            cout << "[" << result[1] << "] row x column => " << m << " x " << n << endl;
            cout << "[" << result[1] << "] Order => m x n => " << m * n << endl;
        }

        {
            // Checking for Null matrix
            if ((m == 0 && n == 0) || nullMatrixChecker(matrix, m, n))
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
            cout << "[" << result[flag] << "] Null or Zero Matrix" << endl;
        }
        {
            // Checking for Row Matrix
            if (m == 1 && n > 1)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
            cout << "[" << result[flag] << "] Row Matrix" << endl;
        }
        {
            // Checking for Column Matrix
            if (n == 1 && m > 1)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
            cout << "[" << result[flag] << "] Column Matrix" << endl;
        }

        {
            // Square matrix
            if (m == n)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
            cout << "[" << result[flag] << "] Square Matrix" << endl;
        }
        {
            // Rectangle matrix
            if (m != n)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
            cout << "[" << result[flag] << "] Rectangle Matrix" << endl;
        }
    }

    return 0;
}

void matrixPrinter(Matrix &matrix, int m, int n, int width = 2)
{

    cout << "┌";
    cout << setw(n * width + 4) << "┐" << endl;
    for (size_t i = 0; i < m; i++)
    {
        cout << "│";
        for (size_t j = 0; j < n; j++)
        {
            cout << setw(width);
            cout << matrix[i][j];
        }
        cout << " │" << endl;
    }
    cout << "└";
    cout << setw(n * width + 4) << "┘" << endl;
}

int matrixInputAndMaxWidth(Matrix &matrix, int m, int n)
{
    int maxWidth = INT_MIN;
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
            {
                int width = 0;
                int temp = matrix[i][j];
                if (temp <= 0)
                {
                    temp = -temp;
                    width++;
                }

                while (temp > 0)
                {
                    temp /= 10;
                    width++;
                }
                maxWidth = max(width, maxWidth);
            }
        }
    }
    return maxWidth + 1;
}

bool nullMatrixChecker(Matrix &matrix, int m, int n)
{
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (matrix[i][j] != 0)
            {
                return 0;
            }
        }
    }
    return 1;
}
