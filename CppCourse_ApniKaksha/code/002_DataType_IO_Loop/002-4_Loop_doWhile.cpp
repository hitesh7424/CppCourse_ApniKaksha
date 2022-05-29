// Do While Loop

/*

do{
    // body
}while(condition);

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

    do
    {
        cout << n << endl;
        cin >> n;
    } while (n > 0);

    return 0;
}