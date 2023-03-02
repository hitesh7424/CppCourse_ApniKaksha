// LOOPS 

// [19] forLoop
// [37] whileLoop
// [54] doWhileLoop

#include <iostream>
using namespace std;

void inOut()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
}

int main()
{
    inOut();

    /*
    // For LOOP

    for(initialisation; condition; update){
        // body
    }

    */
    int n;
    cin >> n;
    int sum = 1;
    for (int counter = 1; counter <= n; counter++)
    {

        sum = sum + counter;
    }
    cout << "sum: " << sum << endl;

    /*
    // While LOOP

    while(condition is true){
        // body
    }

    */

    cin >> n;

    while (n > 0)
    {
        cout << n << endl;
        cin >> n;
    }

    /*
    // Do While Loop

    do{
        // body
    }while(condition);

    */

    cin >> n;

    do
    {
        cout << n << endl;
        cin >> n;
    } while (n > 0);

    return 0;
}
