#include <iostream>
using namespace std;

void inOut()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);   
    freopen("../output.txt", "w", stdout); 
#endif
}

// Checking a number is Even or Odd
int main()
{
    inOut();
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Even " << endl;
    }
    else
    {
        cout << "Odd " << endl;
    }

    return 0;
}