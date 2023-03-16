/**
 * @file 01_Pointers.cpp
 * @date 2023-03-16
 * @brief pointers introduction
 */

/** # Pointers

        Pointers are vriables that store the address of other variables

        > '&' operater is used to get the address of any variable e.g: int* ptr = &variable;
        > '*' is used to dereferencing the pointer variable i.e get the value stored at the address e.g: int value = *ptr;
        > it is used to access a variable using its address
        > it can also be used to change the value at given address


## code
    int main()
    {
        int a = 10;
        int *aptr; // initialising pointer variable
        aptr = &a; // putting address of 'a' in 'ptr'

        cout << &a << endl; // prints address of 'a' => 2000
        cout << aptr << endl; // prints value present in 'aptr' => 2000

        // dereferencing
        cout << *aptr << endl; // prints value at address present in 'aptr' which is value of ;a' => 10

        return 0;
    }


            ═══════memory═════════
            ┌────────────────────┐
       2000 │     a = 10         │
            ├────────────────────┤
            │                    │
            ├────────────────────┤
            │                    │
            ├────────────────────┤
            │                    │
            ├────────────────────┤
       4000 │   aptr = 2000      │
            ├────────────────────┤
            │                    │
            ├────────────────────┤
            │                    │
            ├────────────────────┤
            │                    │
            └────────────────────┘

*/
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *aptr;
    aptr = &a;

    // cout << aptr << endl; // prints address of 'a'
    cout << *aptr << endl; // prints value of 'a'

    *aptr = 20; // changes the value of a

    cout << *aptr << endl; // prints updated value of 'a'

    return 0;
}
