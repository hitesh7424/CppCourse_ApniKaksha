/*

// Hollow Butterfly Using Stars
*                 *
* *             * *
*   *         *   *
*     *     *     *
*       * *       *
*       * *       *
*     *     *     *
*   *         *   *
* *             * *
*                 *

*/

#include <iostream>

int main()
{
    int n;
    // std::cin >> n;
    n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                std::cout << "* ";
                continue;
            }
            std::cout << "  ";
        }
        for (int j = 1; j <= (n - i) * 2; j++)
        {
            std::cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                std::cout << "* ";
                continue;
            }
            std::cout << "  ";
        }

        std::cout << std::endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                std::cout << "* ";
                continue;
            }
            std::cout << "  ";
        }
        for (int j = 1; j <= (n - i) * 2; j++)
        {
            std::cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                std::cout << "* ";
                continue;
            }
            std::cout << "  ";
        }

        std::cout << std::endl;
    }

    return 0;
}
