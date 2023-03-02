/*

// // 0-1 Pattern
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

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

            if ((i + j) % 2 == 0)
            {
                std::cout << "1 ";
            }
            else
            {
                std::cout << "0 ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
