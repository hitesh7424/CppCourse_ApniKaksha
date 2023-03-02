// Data Types[5] & Types Modifiers[82]

// [05] Data Types
// [82] Types Modifiers

/*

Data Types

    Primitive:
        1) Integer    -> 1, 34, 542
        2) Float      -> 3.14, 3.54, 6.022
        3) Character  -> a, b, #, $
        4) Boolean    -> 1, 0

    Derived:
        1) Function
        2) Array
        3) Pointer
        4) Reference

    User-defined:
        1) Class
        2) Structure
        3) Union
        4) Enum

*/

// Primitive Data Types
/*

INT:
    Takes 4 bytes = 4x8 = 32 bits in memory
    Range(unsigned)(only positive integer) = 0 to (2³² - 1) = 0 to 4,29,49,67,295
    Range(signed)(including both positive and negative integer) = -2³¹ to (2³¹ - 1) = -2,14,74,83,648 to 2,14,74,83,647

*/

/*

FLOAT:
    Size = 4 byte
    Upto 7 decimal digits
    Eg. 4.322, 5.16

DOUBLE:
    Size = 8 byte
    Upto 15 decimal digits

*/

/*

CHAR:
    Size = 1 byte

    int ascii = 'a';
    ascii -> 97

*/

/*

BOOL:
    Stores boolean value -> true(1) and false(0)
    Size = 1 byte

*/

/*

// Derived Data Types:
    These data types derived from fundamental (built-in) data types
    Eg. arrays, pointers, function, reference

// User-Defined Data Types:
    These data types are defined by user itself
    Eg. class, structure, union, enumeration, etc

*/

/*

TYPE MODIFIERS:

signed      4 bytes     -2,14,74,83,648 to 2,14,74,83,647
unsigned    4 bytes     0 to 4,29,49,67,295
long        8 bytes     -92,23,37,20,36,85,47,75,808 to 92,23,37,20,36,85,47,75,807
short       2 bytes     -32,768 to 32,767


*/

// CODE

#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);   // input from file input.txt
    freopen("../output.txt", "w", stdout); // output to file output.txt
#endif

    // Data Types

    int a;  // declaration
    a = 32; // initialisation

    cout << "size of int " << sizeof(a) << endl;

    float b;
    cout << "size of float " << sizeof(b) << endl;

    char c;
    cout << "size of char " << sizeof(c) << endl;

    bool d;
    cout << "size of bool " << sizeof(d) << endl;

    // Type Modifiers

    short int si;
    long int li;

    cout << "size of short int " << sizeof(si) << endl;
    cout << "size of long int " << sizeof(li) << endl;

    return 0;
}

/*

OUTPUT:

size of int 4
size of float 4
size of char 1
size of bool 1
size of short int 2
size of long int 8


*/
