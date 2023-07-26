#include <iostream>
using namespace std;

/** 
 * @name Write a program to generate/print all possible subsets to a set
 *
 * number of all subsets of n elements set = 2 to the power n & 1<<n
 *
 * subsets of {a,b,c}:
 *
 * {}       000     0
 * {c}      001     1
 * {b}      010     2
 * {b,c}    011     3
 * {a}      100     4
 * {a,c}    101     5
 * {a,b}    110     6
 * {a,b,c}  111     7
 * 
 * position of set bit is taken as element index
 * 
 * "set bit" means the value of bit is 1
 * 
 * 
 */

void subsets(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++) // 1<<n equals to 2 to the power n
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j)) // get bit function
                cout << arr[j] << " ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int arr[4] = {1, 2, 3, 4};
    subsets(arr, 4);

    return 0;
}
