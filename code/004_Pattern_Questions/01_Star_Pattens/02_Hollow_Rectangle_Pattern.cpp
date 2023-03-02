/*
// Hollow Rectangle Pattern

    ****
    *  *
    *  *
    *  *
    ****

*/

#include <iostream>

int main()
{
    int rows, colmns;
    std::cin >> rows >> colmns;

    // rows = 5;
    // colmns = 4;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colmns; j++)
        {
            if (i == 0 | j == 0 | i == (rows - 1) | j == (colmns - 1))
            {
                std::cout << "*";
                continue;
            }
            std::cout << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
