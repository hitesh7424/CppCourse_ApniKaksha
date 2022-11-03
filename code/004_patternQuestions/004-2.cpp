// Advanced Star Pattens

// [011] Inverted Pattern
// [045] 0-1 Pattern
// [084] Rhombus Pattern
// [117] Number Pattern
// [150] Palindromic Pattern
// [189] Star Palindromic Pattern
// [239] Zig-Zag Pattern

// // Inverted Pattern
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

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

//     int n;
//     // std::cin >> n;
//     n = 5;

// for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n + 1 - i; j++)
//         {
//             std::cout << j << " ";
//         }
//         std::cout << std::endl;
//     }

//     return 0;
// }

// // 0-1 Pattern
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

// #include <iostream>

// int main()
// {

//     int n;
//     // std::cin >> n;
//     n = 5;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {

//             if ((i + j) % 2 == 0)
//             {
//                 std::cout << "1 ";
//             }
//             else
//             {
//                 std::cout << "0 ";
//             }
//         }
//         std::cout << std::endl;
//     }

//     return 0;
// }

// // Rhombus Pattern
//     * * * * *
//    * * * * *
//   * * * * *
//  * * * * *
// * * * * *

// #include <iostream>

// int main()
// {

//     int n;
//     // std::cin >> n;
//     n = 5;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             std::cout << " ";
//         }

//         for (int j = 1; j <= n; j++)
//         {
//             std::cout << "* ";
//         }
//         std::cout << std::endl;
//     }

//     return 0;
// }

// // Number Pattern
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5

// #include <iostream>

// int main()
// {

//     int n;
//     // std::cin >> n;
//     n = 5;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             std::cout << " ";
//         }

//         for (int j = 1; j <= i; j++)
//         {
//             std::cout << j<<" ";
//         }
//         std::cout << std::endl;
//     }

//     return 0;
// }

// // // Palindromic Pattern
// //         1
// //       2 1 2
// //     3 2 1 2 3
// //   4 3 2 1 2 3 4
// // 5 4 3 2 1 2 3 4 5

// #include <iostream>

// int main()
// {

//     int n;
//     // std::cin >> n;
//     n = 5;

//     for (int i = 1; i <= n; i++)
//     {
//         int j = 0;
//         for (j = 1; j <= n - i; j++)
//         {
//             std::cout << "  ";
//         }
//         int k = i;
//         for (; j <= n; j++)
//         {
//             std::cout << k-- << " ";
//         }
//         k = 2;
//         for (; j <= n + i - 1; j++)
//         {
//             std::cout << k++ << " ";
//         }
//         std::cout << std::endl;
//     }

//     return 0;
// }

// // // Star Palindromic Pattern
// //       *
// //     * * *
// //   * * * * *
// // * * * * * * *
// // * * * * * * *
// //   * * * * *
// //     * * *
// //       *

// #include <iostream>

// int main()
// {

//     int n;
//     // std::cin >> n;
//     n = 4;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             std::cout << "  ";
//         }

//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             std::cout << "* ";
//         }

//         std::cout << std::endl;
//     }
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             std::cout << "  ";
//         }

//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             std::cout << "* ";
//         }

//         std::cout << std::endl;
//     }
//     return 0;
// }

// // // Zig-Zag Pattern
// //     *       *
// //   *   *   *   *
// // *       *       *

// #include <iostream>

// int main()
// {

//     int n;
//     // std::cin >> n;
//     n = 9;

//     for (int i = 1; i <= 3; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {

//             if ((i + j) % 4 == 0 || i == 2 && j % 4 == 0)
//             {
//                 std::cout << "* ";
//                 continue;
//             }
//             std::cout << "  ";
//         }

//         std::cout << std::endl;
//     }

//     return 0;
// }
