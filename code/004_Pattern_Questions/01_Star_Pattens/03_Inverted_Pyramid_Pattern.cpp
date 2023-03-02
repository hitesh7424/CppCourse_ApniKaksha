/* 
// Inverted Pyramid Pattern

    *****
    ****
    ***
    **
    *

*/

#include <iostream>

int main()
{
    int n;

    std::cin >> n;

    // n = 5;
    std::cout << "hello"<<std::endl;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
