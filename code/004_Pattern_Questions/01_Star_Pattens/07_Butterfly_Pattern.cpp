/*
// Butterfly Pattern

// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *

*/

#include <iostream>

int main()
{
    int n, Count;
    // std::cin >> n;
    n = 4;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "* ";
        }
        int spaces = n * 2 - i * 2;
        for (int j = 1; j <= spaces; j++)
        {
            std::cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "* ";
        }
        int spaces = n * 2 - i * 2;
        for (int j = 1; j <= spaces; j++)
        {
            std::cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}