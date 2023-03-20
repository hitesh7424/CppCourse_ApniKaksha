#include <iostream>
using namespace std;

int main()
{
    int a = 10; // Stored in stack

    int *p = new int(); // Allocate Memory in Heap
    *p = 10;            //
    delete (p);         // Dellocate Memory

    p = new int[10]; // Allocate Memory for array in Heap
    delete[] p;      // Dellocate array pointer p
    p = NULL;        // Removes Memory address stored in pointer p

    return 0;
}
