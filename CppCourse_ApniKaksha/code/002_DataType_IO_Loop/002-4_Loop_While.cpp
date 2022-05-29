// While LOOP

/*

while(condition is true){
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

    while (n > 0)
    {
        cout << n << endl;
        cin >> n;
    }

    return 0;
}