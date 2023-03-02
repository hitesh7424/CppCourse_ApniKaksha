/*

// Solid Rectangle Pattern

    *****
    *****
    *****
    *****

*/

#include <iostream>

int main()
{
    int rows, colmns;
    std::cin >> rows >> colmns;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colmns; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
