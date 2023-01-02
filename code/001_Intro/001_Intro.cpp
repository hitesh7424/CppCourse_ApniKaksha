// learning C++
// Sum of two Number

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);   // input from file input.txt
    freopen("../output.txt", "w", stdout); // output to file output.txt
#endif

    int a, b, sum;
    cin >> a >> b;
    cout << a + b;

    return 0;
}
// add a empty line at the end to avoid  "warning: no newline at end of file"
