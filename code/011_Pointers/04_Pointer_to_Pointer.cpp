/**
 * @file 04_Pointer_to_Pointer.cpp
 * @date 2023-03-16
 * @brief pointer that points to another pointer
 */

/*

# Pointer to Pointer

    int main()
    {
        int a = 10;
        int *p = &a;

        cout << *p << endl;

        int **q = &p;

        cout << *q << endl;
        cout << **q << endl;

        return 0;
    }


            ═══════MEMORY═════════
            ┌────────────────────┐
       2000 │     a = 10         │
            ├────────────────────┤
            │                    │
            ├────────────────────┤
            │                    │
            ├────────────────────┤
            │                    │
            ├────────────────────┤
       4000 │     p = 2000       │
            ├────────────────────┤
            │                    │
            ├────────────────────┤
            │                    │
            ├────────────────────┤
            │                    │
            ├────────────────────┤
       4200 │     q = 4000       │
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
    int *p = &a;

    cout << *p << endl;

    int **q = &p;

    cout << *q << endl;
    cout << **q << endl;

    return 0;
}

/*

Output:
10
0x1593ff9b4
10

*/