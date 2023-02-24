#include <iostream>
#include <vector>
#include <iomanip>

// Matrix matrix(row, std::vector<int>(column, initial_value_of_elements));
typedef std::vector<std::vector<int> > Matrix;

void matrix_Printer(Matrix &matrix, int row, int column);

bool is_Null_Matrix(Matrix &matrix, int row, int column);
bool is_Row_Matrix(Matrix &matrix, int row, int column);
bool is_Column_Matrix(Matrix &matrix, int row, int column);
bool is_Square_Matrix(Matrix &matrix, int row, int column);
bool is_Rectangle_Matrix(Matrix &matrix, int row, int column);

void matrix_Printer(Matrix &matrix, int row, int column)
{
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

    int width = maxWidth + 1;

    std::cout << "┌";
    std::cout << std::setw(column * width + 4) << "┐" << std::endl;
    for (size_t i = 0; i < row; i++)
    {
        std::cout << "│";
        for (size_t j = 0; j < column; j++)
        {
            std::cout << std::setw(width);
            std::cout << matrix[i][j];
        }
        std::cout << " │" << std::endl;
    }
    std::cout << "└";
    std::cout << std::setw(column * width + 4) << "┘" << std::endl;
}

bool is_Null_Matrix(Matrix &matrix, int row, int column)
{
    if (row == 0 && column == 0)
    {
        return 1;
    }

    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < column; j++)
        {
            if (matrix[i][j] != 0)
            {
                return 0;
            }
        }
    }

    return 1;
}

bool is_Row_Matrix(Matrix &matrix, int row, int column)
{
    if (row == 1 && column > 1)
    {
        return 1;
    }

    return 0;
}

bool is_Column_Matrix(Matrix &matrix, int row, int column)
{
    if (row > 1 && column == 1)
    {
        return 1;
    }

    return 0;
}

bool is_Square_Matrix(Matrix &matrix, int row, int column)
{
    if (!(row > 1 && column > 1))
    {
        return 0;
    }
    if (row == column)
    {
        return 1;
    }

    return 0;
}

bool is_Rectangle_Matrix(Matrix &matrix, int row, int column)
{

    if (!(row > 1 && column > 1))
    {
        return 0;
    }

    if (row != column)
    {
        return 1;
    }

    return 0;
}
