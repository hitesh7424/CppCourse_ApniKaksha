/*
// Floyd's Triangle

    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15

*/

#include <iostream>

int main()
{
    int n, Count;
    // std::cin >> n;
    n = 5;
    Count = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << Count++ << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}
