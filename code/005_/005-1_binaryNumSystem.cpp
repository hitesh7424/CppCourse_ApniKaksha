// BInaryNARY NUMBER SYSTEM

/*
Decimal Number System

base: 10

for number:1234
base:       10³     10²     10¹     10⁰
multiplier: 1000    100     10      1
digit:      1       2       3       4

1234 = 1000 + 200 + 30 + 4
1234 = 1x1000 + 2x100 + 3x10 + 4x1
1234 = 1x10 +³ 2x10² + 3x10¹ + 4x10⁰

*/
/*

Binarynary Number System

base:2
for number:45
base:       2⁶      2⁵      2⁴      2³     2²     2¹     2⁰
multiplier: 64      32      16      8      4      2      1
digit:               1       0      1      1      0      1

45 = 101101
45 = 1x32 + 0x16 + 1x8 + 1x4 + 1x2 + 1x1
45 = 1x2⁵ + 0x2⁴ + 1x2³ + 1x2² + 1x2¹ + 1x2⁰

*/

/*

Decimal to Binarynary


  N     Quotient(N/10)   Remainder(N%10)
1234        123              4
 123         12              3
  12          1              2
   1          0              1

N     Q(N/2)   R(N%2)
50      25        0
25      12        1
12      6         0
6       3         0
3       1         1
1       0         1

binary of 50 = 110010

*/

/*

Binary to Decimal

for 45:
1       0       1      1      0      1
2⁵      2⁴      2³     2²     2¹     2⁰

1x2⁵ + 0x2⁴ + 1x2³ + 1x2² + 1x2¹ + 1x2⁰

*/

#include <iostream>

int DtoB(int decimal)
{
    int binary = 0, count = 1;

    // std::cout << "N\tN/2\tN%2\t2^n\tbinary" << std::endl;
    while (decimal != 0)
    {
        // std::cout << decimal << "\t" << decimal / 2 << "\t" << decimal % 2 << "\t" << count << "\t" << binary << std::endl;
        binary = binary + (decimal % 2) * count;
        count = count * 10;
        decimal = decimal / 2;
    }
    // std::cout << decimal << "\t" << decimal / 2 << "\t" << decimal % 2 << "\t" << count << "\t" << binary << std::endl;

    return binary;
}

int BtoD(int binary)
{
    int decimal = 0, count = 1;

    // std::cout << "N\tN/2\tN%2\t10^n\tdecimal" << std::endl;
    while (binary != 0)
    {
        // std::cout << binary << "\t" << binary / 10 << "\t" << binary % 10 << "\t" << count << "\t" << decimal << std::endl;
        decimal = decimal + (binary % 10) * count;
        count = count * 2;
        binary = binary / 10;
    }
    // std::cout << binary << "\t" << binary / 10 << "\t" << binary % 10 << "\t" << count << "\t" << decimal << std::endl;

    return decimal;
}

int main()
{
    std::cout << "Namaste" << std::endl;
    int decimal = 0;
    // std::cout << "Number: ";
    // std::cin >> decimal;
    decimal = 50;

    std::cout << "binary of " << decimal << " : " << DtoB(decimal) << std::endl;
    std::cout << "decimal of " << DtoB(decimal) << ": " << BtoD(DtoB(decimal)) << std::endl;
    return 0;
}
