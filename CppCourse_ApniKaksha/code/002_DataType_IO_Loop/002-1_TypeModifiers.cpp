// Types Modifiers

/*

TYPE MODIFIERS:

signed      4 bytes     -2,14,74,83,648 to 2,14,74,83,647
unsigned    4 bytes     0 to 4,29,49,67,295
long        8 bytes     -92233720,6854775808 to 9223372036854775807
short       2 bytes     -32,768 to 32,767


*/

// CODE

#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);   
    freopen("../output.txt", "w", stdout); 
#endif

    // Type Modifiers

    short int si;
    long int li;

    cout << "size of short int " << sizeof(si) << endl;
    cout << "size of long int " << sizeof(li) << endl;

    return 0;
}

/*

OUTPUT:

size of short int 2
size of long int 8


*/