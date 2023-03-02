/*

// // Rhombus Pattern
//     * * * * *
//    * * * * *
//   * * * * *
//  * * * * *
// * * * * *

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

        for (int j = 1; j <= n; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}
