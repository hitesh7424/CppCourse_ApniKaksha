// 1) ARITHMETIC OPERATORS

/*

1) Arithmetic Operators:
    Binary operators + - * / %(modulo)
    Unary operators ++(incrementer) --(decrementer)

    Pre Increpemter(++a):
        Increments a instantly

            int a = 10;
            int b;

            b = ++a;

            cout <<a<<" "<<b<<endl;

            OUTPUT:
            11 11

    Post Incrementer(a++):
        Current value of a is preserverd temporarily.
        a will get incremented before next statement
        is executed.

            int a = 10;
            int b;

            b = a++;

            cout <<a<<" "<<b<<endl;

            OUTPUT:
            11 10


*/

#include <iostream>
using namespace std;

void io()
{
#ifndef IN_OUT
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
}

/*

// Eg 1.

int main()
{
    io();

    int i = 1;

       //1    //3
    i = i++ + ++i;

    cout << i << endl;

    return 0;
}



// OUTPUT: 4

*/
/*

// Eg 2.

int main()
{
    io();

    int i = 1;
    int j = 2;
    int k;

    // 1 //2  //1   //2    //3   //4
    k = i + j + i++ + j++ + ++i + ++j;

    cout << i << " " << j << " " << k << endl;

    return 0;
}

// OUTPUT: 3 4 13

*/

/*

// Eg 3.

int main()
{
    io();

    int i = 0;

    //  // 0   //0   //1   //1
    i = i++ - --i + ++i - i--;

    cout << i << endl;

    return 0;
}

// OUTPUT: 0

*/

/*
// Eg 4.

int main()
{
    io();

    int i = 1;
    int j = 2;
    int k = 3;
    //      //1   //2   //3
    int m = i-- - j-- - k--;

    cout << i << endl; //0
    cout << j << endl; //1
    cout << k << endl; //2
    cout << m << endl; //-4

    return 0;
}

// OUTPUT:
// 0
// 1
// 2
// -4

*/

/*

// Eg 5.

int main()
{
    io();

    int i = 10, j = 20, k;

    //  //10  //9   //19  //20  //9   //20  //10  //19
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout << i << endl; //10
    cout << j << endl; //20
    cout << k << endl; //-20

    return 0;
}

// OUTPUT:
// 10
// 20
// -20

*/

// Eg 6.

int main()
{
    io();

    int i = 10, j = 20, k;

    //  //10  //9   //19  //20  //9   //20  //10  //19
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout << i << endl; // 10
    cout << j << endl; // 20
    cout << k << endl; //-20

    return 0;
}

// OUTPUT:
// 10
// 20
// -20