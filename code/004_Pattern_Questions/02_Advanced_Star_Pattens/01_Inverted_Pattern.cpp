/*

// Inverted Pattern

    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1

*/

#include <iostream>

// #ifndef IN_OUT
//     freopen("../input.txt", "r", stdin);
//     freopen("../output.txt", "w", stdout);
// #endif

int main()
{
    int n;
    // std::cin >> n;
    n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
