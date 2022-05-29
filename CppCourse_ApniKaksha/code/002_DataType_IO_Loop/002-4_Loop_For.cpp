// For LOOP

/*

for(initialisation; condition; update){
    // body
}

*/

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

    int n;
    cin >> n;

    int sum = 1, sum_temp = 1;

    // For Loop
    for (int counter = 1; counter <= n; counter++)
    {
        sum = sum + counter;
    }
    cout << "sum: " << sum << endl;

    return 0;
}