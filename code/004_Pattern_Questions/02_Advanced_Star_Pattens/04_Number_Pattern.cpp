/*

// Number Pattern
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

*/

#include <iostream>

int main()
{
    int n;
    // std::cin >> n;
    n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            std::cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            std::cout << j<<" ";
        }
        std::cout << std::endl;
    }

    return 0;
}
