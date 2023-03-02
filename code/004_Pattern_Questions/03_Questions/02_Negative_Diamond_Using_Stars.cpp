/*

// Negative Diamond Using Stars
* * * * * * * * *
* * * *   * * * *
* * *       * * *
* *           * *
*               *
*               *
* *           * *
* * *       * * *
* * * *   * * * *
* * * * * * * * *

*/

#include <iostream>

int main()
{
    int n;
    // std::cin >> n;
    n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            std::cout << "* ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                std::cout << "* ";
                continue;
            }
            std::cout << "  ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            std::cout << "* ";
        }

        std::cout << std::endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            std::cout << "* ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                std::cout << "* ";
                continue;
            }
            std::cout << "  ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            std::cout << "* ";
        }

        std::cout << std::endl;
    }

    return 0;
}
