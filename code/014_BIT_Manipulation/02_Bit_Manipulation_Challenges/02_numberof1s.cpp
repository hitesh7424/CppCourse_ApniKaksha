#include <iostream>
using namespace std;

/** 
 * @name Write a program to count the number of ones in binary representation of a number
 * 
 * do n = (n & (n-1)) till n == 0
 * this will eliminate 1 one by one from the right side, at last 0 will remain
 * 
 * * Example:
 * let n = 7 = 111
 * => n = (111 & 110) = 110 = 6 // 1
 * => n = (110 & 100) = 100 = 4 // 2
 * => n = (100 & 000) = 000 = 0 // 3
 * 
 * hence number of ones is '3'
 * 
 * 
*/


int numberOfOnes(int n)
{
    int count = 0;
    while (n)
    {
        n = (n & (n - 1));
        count++;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    cout << numberOfOnes(19) << endl;

    return 0;
}
