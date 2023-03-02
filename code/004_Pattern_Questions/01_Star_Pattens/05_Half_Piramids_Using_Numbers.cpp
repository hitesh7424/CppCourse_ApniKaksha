/* 
// Half Piramids Using Numbers

    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
    6 6 6 6 6 6
    7 7 7 7 7 7 7

*/

#include <iostream>

int main()
{
    int n;
    // std::cin >> n;
    n = 7;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << i << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}
