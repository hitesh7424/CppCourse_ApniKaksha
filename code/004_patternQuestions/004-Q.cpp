// [007] Hollow Diamond Using Stars
// [067] Hollow Diamond Using Stars
// [137] Hollow Rhumbus Using Stars
// [175] Hollow Butterfly Using Stars
// [255] Pascal's Triangle

// // // Hollow Diamond Using Stars
// //         *
// //       *   *
// //     *       *
// //   *           *
// //   *           *
// //     *       *
// //       *   *
// //         *

// #include <iostream>

// int main()
// {

//     int n;
//     // std::cin >> n;
//     n = 4;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n + 1 - i; j++)
//         {
//             std::cout << "  ";
//         }
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             if (j == 1 || j == 2 * i - 1)
//             {
//                 std::cout << "* ";
//                 continue;
//             }
//             std::cout << "  ";
//         }

//         std::cout << std::endl;
//     }

//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= n + 1 - i; j++)
//         {
//             std::cout << "  ";
//         }
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             if (j == 1 || j == 2 * i - 1)
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

// // // Hollow Diamond Using Stars
// // * * * * * * * * *
// // * * * *   * * * *
// // * * *       * * *
// // * *           * *
// // *               *
// // *               *
// // * *           * *
// // * * *       * * *
// // * * * *   * * * *
// // * * * * * * * * *

// #include <iostream>

// int main()
// {

//     int n;
//     // std::cin >> n;
//     n = 5;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             std::cout << "* ";
//         }
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             if (j == 1 || j == 2 * i - 1)
//             {
//                 std::cout << "* ";
//                 continue;
//             }
//             std::cout << "  ";
//         }
//         for (int j = 1; j <= n - i; j++)
//         {
//             std::cout << "* ";
//         }

//         std::cout << std::endl;
//     }

//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             std::cout << "* ";
//         }
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             if (j == 1 || j == 2 * i - 1)
//             {
//                 std::cout << "* ";
//                 continue;
//             }
//             std::cout << "  ";
//         }
//         for (int j = 1; j <= n - i; j++)
//         {
//             std::cout << "* ";
//         }

//         std::cout << std::endl;
//     }

//     return 0;
// }

// // // Hollow Rhumbus Using Stars
// //     * * * * *
// //    *       *
// //   *       *
// //  *       *
// // * * * * *

// #include <iostream>

// int main()
// {

//     int n;
//     // std::cin >> n;
//     n = 5;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             std::cout << " ";
//         }
//         for (int j = 1; j <= n; j++)
//         {
//             if (i == 1 || j == 1 || i == n || j == n)
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

// // // Hollow Butterfly Using Stars
// // *                 *
// // * *             * *
// // *   *         *   *
// // *     *     *     *
// // *       * *       *
// // *       * *       *
// // *     *     *     *
// // *   *         *   *
// // * *             * *
// // *                 *

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
//             if (j == 1 || j == i)
//             {
//                 std::cout << "* ";
//                 continue;
//             }
//             std::cout << "  ";
//         }
//         for (int j = 1; j <= (n - i) * 2; j++)
//         {
//             std::cout << "  ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             if (j == 1 || j == i)
//             {
//                 std::cout << "* ";
//                 continue;
//             }
//             std::cout << "  ";
//         }

//         std::cout << std::endl;
//     }

//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if (j == 1 || j == i)
//             {
//                 std::cout << "* ";
//                 continue;
//             }
//             std::cout << "  ";
//         }
//         for (int j = 1; j <= (n - i) * 2; j++)
//         {
//             std::cout << "  ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             if (j == 1 || j == i)
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

// // // Pascal's Triangle
// //         1   
// //       1   1
// //     1   2   1   
// //   1   3   3   1
// // 1   4   6   4   1 

// #include <iostream>

// int main()
// {

//     int n;
//     // std::cin >> n;
//     n = 5;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             std::cout << "  ";
//         }

//         int coef = 1;
//         for (int j = 1; j <= i; j++)
//         {
//             std::cout << coef << "   ";
//             coef = coef * (i - j) / j;
//         }

//         std::cout << std::endl;
//     }

//     return 0;
// }
