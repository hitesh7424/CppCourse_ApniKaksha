// INPUT OUTPUT

// [26] INPUT
// [32] OUTPUT

/*

cin>>(variable_name); // for taking input

cout<<"string"<<(variable_name)<<endl; // for output

*/

#include <iostream>
using namespace std;

void in_out()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);   
    freopen("../output.txt", "w", stdout); 
#endif
}

int main()
{
    in_out();

    // std::cout << "Hello World\n";
    int amount1;
    cin >> amount1; // taking input amount1
    int amount2;
    cin >> amount2; // taking input amount2

    // cout << "Hello World\n";
    int sum = amount1 + amount2;
    cout << "sum\n";
    cout << sum << endl; // giving output sum
    return 0;
}