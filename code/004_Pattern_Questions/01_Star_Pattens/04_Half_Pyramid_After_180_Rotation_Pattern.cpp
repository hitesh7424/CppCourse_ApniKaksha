/*
// Half Pyramid After 180° Rotation Pattern

    *
    **
    ***
    ****
    *****

*/

#include <iostream>

int main()
{
    int n;

    // std::cin >> n;

    n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < n - i - 1)
            {
                std::cout << "  ";
            }
            else
            {
                std::cout << " *";
            }
        }

        std::cout << std::endl;
    }

    return 0;
}
