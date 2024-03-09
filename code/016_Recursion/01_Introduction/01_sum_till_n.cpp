#include <iostream>
using namespace std;

int Sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int prevSum = n + Sum(n - 1);
    return prevSum;
}

int main()
{
    int n;
    cin >> n;
    cout << Sum(n);
    return 0;
}