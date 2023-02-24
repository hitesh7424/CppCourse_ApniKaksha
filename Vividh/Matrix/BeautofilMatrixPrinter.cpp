/*
Input:
4 4
1 4 7 11
2 5 8 12
3 6 9 16
10 13 14 17


Output:
┌             ┐
│  1  4  7 11 │
│  2  5  8 12 │
│  3  6  9 16 │
│ 10 13 14 17 │
└             ┘

*/

#include <iostream>
#include <iomanip>
#include "my_matrix_lib.h"

int main()
{
    int row, column, initial_value_of_elements = 0;
    std::cin >> row >> column;
    Matrix matrix(row, std::vector<int>(column, initial_value_of_elements));

    // taking matrix input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    // Beautiful Matrix Printer
    {
        int width = 2;
        int maxWidth = INT_MIN;
        for (size_t i = 0; i < row; i++)
        {
            for (size_t j = 0; j < column; j++)
            {
                std::cin >> matrix[i][j];
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
                    maxWidth = std::max(width, maxWidth);
                }
            }
        }
        width = maxWidth + 1;
        std::cout << "┌";
        std::cout << std::setw(column * width + 4) << "┐"
                  << "\n";
        for (size_t i = 0; i < column; i++)
        {
            std::cout << "│";
            for (size_t j = 0; j < row; j++)
            {
                std::cout << std::setw(width);
                std::cout << matrix[i][j];
            }
            std::cout << " │"
                      << "\n";
        }
        std::cout << "└";
        std::cout << std::setw(row * width + 4) << "┘"
                  << "\n";
    }

    return 0;
}
