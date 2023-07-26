#include <iostream>
using namespace std;

/**
 * @name Write a program to check if a given number is power of 2.
 *
 * (n && !(n & (n - 1)))
 *
 * <=0 = flase
 * >=1 = true
 *
 * * let n = 8 = 1000;
 *  => 1000 && !(1000 & 0111)
 *  => 1000 && !(0000)
 *  => 8(true) && 1(true) // greater than 0 is taken as true or 1
 *  => 1(true)
 *
 * * let n = 7 = 0111;
 *  => 7(true) && !(0111 & 0110)
 *  => 7(true) && !(0110)
 *  => 7(true) && !(6(true))
 *  => 7(true) && 0(false)
 *  => 0(false)
 *
 * * let n = 0 = 0; n-1 = -1 = 11111111;
 *  => 0 && !(0 & 11111111)
 *  => 0 && !(0)
 *  => 0 && 1
 *  => 0(false)
 *
 *
*/

bool ispowerof2(int n)
{
    return (n && !(n & (n - 1)));
}

int main(int argc, char const *argv[])
{
    cout << ispowerof2(8) << endl;

    return 0;
}
