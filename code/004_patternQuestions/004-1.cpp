// Star Pattens

// [011] Solid Rectangle Pattern
// [048] Hollow Rectangle Pattern
// [083] Inverted Pyramid Pattern
// [114] Half Pyramid After 180° Rotation Pattern
// [152] Half Piramids Using Numbers
// [184] Floyd's Triangle
// [215] Butterfly Pattern

// // Solid Rectangle Pattern
// *****
// *****
// *****
// *****

//

// #include <iostream>

// void io()
// {
// #ifndef IN_OUT
//     freopen("../input.txt", "r", stdin);
//     freopen("../output.txt", "w", stdout);
// #endif
// }

// int main()
// {
//     // io();

//     int rows, colmns;
//     std::cin >> rows>>colmns;

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < colmns; j++)
//         {
//             std::cout << "*";
//         }
//         std::cout << std::endl;
//     }

//     return 0;
// }

// // Hollow Rectangle Pattern
// ****
// *  *
// *  *
// *  *
// ****

// #include <iostream>

// int main()
// {
//     // io();

//     int rows, colmns;
//     std::cin >> rows>>colmns;

//     // rows = 5;
//     // colmns = 4;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < colmns; j++)
//         {
//             if (i==0|j==0|i==(rows-1)|j==(colmns-1))
//             {
//                 std::cout << "*";
//                 continue;
//             }
//             std::cout << " ";
//         }
//         std::cout << std::endl;
//     }

//     return 0;
// }

// // Inverted Pyramid Pattern
// *****
// ****
// ***
// **
// *

// #include <iostream>

// int main()
// {
//     // io();

//     int n;

//     std::cin >> n;

//     // n = 5;
//     std::cout << "hello"<<std::endl;
//     for (int i = n; i > 0; i--)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             std::cout << "*";
//         }
//         std::cout << std::endl;
//     }

//     return 0;
// }

// // Half Pyramid After 180° Rotation Pattern
//     *
//    **
//   ***
//  ****
// *****

// #include <iostream>

// int main()
// {
//     // io();

//     int n;

//     // std::cin >> n;

//     n = 5;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (j < n - i -1)
//             {
//                 std::cout << "  ";
//             }
//             else{
//                 std::cout << " *";
//             }
//         }

//         std::cout << std::endl;
//     }

//     return 0;
// }

// // Half Piramids Using Numbers
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// 6 6 6 6 6 6
// 7 7 7 7 7 7 7

// #include <iostream>

// int main()
// {
//     // io();

//     int n;
//     // std::cin >> n;
//     n = 7;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             std::cout << i << " ";
//         }

//         std::cout << std::endl;
//     }

//     return 0;
// }

// // Floyd's Triangle
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

// #include <iostream>

// int main()
// {
//     // io();

//     int n, Count;
//     // std::cin >> n;
//     n = 5;
//     Count = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             std::cout << Count++ << " ";
//         }

//         std::cout << std::endl;
//     }

//     return 0;
// }

// // Butterfly Pattern
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *

#include <iostream>

int main()
{
    // io();

    int n, Count;
    // std::cin >> n;
    n = 4;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "* ";
        }
        int spaces = n * 2 - i * 2;
        for (int j = 1; j <= spaces; j++)
        {
            std::cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "* ";
        }
        int spaces = n * 2 - i * 2;
        for (int j = 1; j <= spaces; j++)
        {
            std::cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}
