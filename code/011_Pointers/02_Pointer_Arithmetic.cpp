/**
 * @file 02_Pointer_Arithmetic.cpp
 * @date 2023-03-16
 * @brief Pointer Arithmetic
 */

/*

# Pointer Arithmetic ++,--,+,-

## code1
    int main()
    {
        int a = 10;
        int *aptr = &a;
        cout << aptr << endl; // 2000

        aptr++; // it will increment stored address by 4 due to int data type
        cout << aptr << endl; // 2004

        return 0;
    }

## code1
    int main()
    {
        char ch = 'a';
        char *cptr = &ch;
        cout << cptr << endl; // 3000

        cptr++; // it will increment stored address by 1 due to char data type
        cout << cptr << endl; // 3001

        return 0;
    }



*/

#include <iostream>
using namespace std;

int main()
{
    // int a = 10;
    // int *aptr = &a;
    // cout << aptr << endl; // 2000

    // aptr++;               // it will increment stored address by 4 due to int data type
    // cout << aptr << endl; // 2004

    char ch = 'a';
    char *cptr = &ch;
    cout << (int*)cptr << endl; // 3000

    cptr++;               // it will increment stored address by 1 due to char data type
    cout << (int*)cptr << endl; // 3001

    return 0;
}
