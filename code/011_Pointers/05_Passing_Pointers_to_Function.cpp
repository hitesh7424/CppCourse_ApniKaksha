/**
 * @file 05_Passing_Pointers_to_Function.cpp
 * @date 2023-03-16
 * @brief passing pointer to function
 */

/*

# Passing Pointers to Function

        > By passing a reference, the function can access and modify the 
          value of the original variable.

code:

    // This function will do nothing as value of variable is passed in the function
    // void increment(int a){
    //     a++;
    // }

    // This will increment the value present in the passed pointer to this function
    void increment(int *a){
    *a += 1;
    }

    int main(){

        int a = 2;
        increment(a);
        cout << a << endl;

        return 0;
    }




*/

#include <iostream>
using namespace std;

// This function will do nothing as value of variable is passed in the function
// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// This function will swap the value as address of variable is passed
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 2;
    int b = 4;

    int *aptr = &a;
    int *bptr = &b;

    cout << a << " " << b << endl;

    // swap(aptr, bptr);
    swap(&a, &b);
    cout << a << " " << b << endl;

    return 0;
}

/*
Output:
2 4
4 2

*/