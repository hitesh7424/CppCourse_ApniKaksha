/*

// Pascal's Triangle
        1
      1   1
    1   2   1
  1   3   3   1
1   4   6   4   1

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
            std::cout << "  ";
        }

        int coef = 1;
        for (int j = 1; j <= i; j++)
        {
            std::cout << coef << "   ";
            coef = coef * (i - j) / j;
        }

        std::cout << std::endl;
    }

    return 0;
}
