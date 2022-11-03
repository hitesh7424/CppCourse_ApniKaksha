// BINARY NUMBER SYSTEM

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

Binary Number System

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

Decimal to Binary


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

void DtoB()
{

    // Decimal to Binary
    int decimal = 0, binary = 0, count = 1;
    std::cin >> decimal;

    while (decimal > 0)
    {
        binary = binary + (decimal % 2) * count;
        count = count * 10;
        decimal = decimal / 2;
    }

    std::cout << binary << std::endl;
}

void BtoD()
{
    // Binary to Decimal
    int binary = 0, decimal = 0, count = 1;
    std::cin >> binary;

    while (binary > 0)
    {
        decimal = decimal + (binary % 10) * count;
        count = count * 2;
        binary = binary / 10;
    }
    std::cout << decimal << std::endl;
}

int main()
{
    // Decimal to Binary
    // DtoB();

    // Binary to Decimal
    // BtoD();
    
    return 0;
}
