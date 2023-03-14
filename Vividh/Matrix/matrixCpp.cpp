/*

Input:
3 5
5 12 17 9 3
13 4 8 14 1
9 6 3 7 21

Output:
┌                ┐
│  5 12 17  9  3 │
│ 13  4  8 14  1 │
│  9  6  3  7 21 │
└                ┘

Properties of given matrix:
[⚜] row x column => 3 x 5
[⚜] Order => m x n => 15
[✗] Null or Zero Matrix
[✗] Row Matrix
[✗] Column Matrix
[✗] Square Matrix
[✓] Rectangle Matrix

*/

#include <iostream>
#include <vector>
#include "my_matrix_lib.h"
using namespace std;

// Matrix matrix(row, vector<int>(column, initial_value_of_elements));

int main()
{
    int row, column;
    cin >> row >> column;

    Matrix matrix(row, vector<int>(column, 0));

    matrix_Printer(matrix, row, column);

    char result[][20] = {"❎", "✅", "❇️"};

    /*
    // property lister
    1. Row x Column
    2. Order m X n
    3. Null matrix
    4. Row matrix
    5. Column matrix
    6. Square matrix
    7. Rectangle matrix
    */

    cout << "\nProperties of given matrix:" << endl;

    cout << result[2] << "row x column => " << row << " x " << column << endl;
    cout << result[2] << "Order => m x n => " << row * column << endl;

    cout << result[is_Null_Matrix(matrix, row, column)] << "Null or Zero Matrix" << endl;
    cout << result[is_Row_Matrix(matrix, row, column)] << "Row Matrix" << endl;
    cout << result[is_Column_Matrix(matrix, row, column)] << "Column Matrix" << endl;
    cout << result[is_Square_Matrix(matrix, row, column)] << "Square Matrix" << endl;
    cout << result[is_Rectangle_Matrix(matrix, row, column)] << "Rectangle Matrix" << endl;

    return 0;
}
