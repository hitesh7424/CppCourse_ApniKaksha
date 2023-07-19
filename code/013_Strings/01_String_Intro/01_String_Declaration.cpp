#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Declare Strings

    string str0 = "Hitesh"; // declares string with value "Hitesh"
    string str2(5, 'H');    // declare string with value "HHHHH"
    string str3(str2);      // declare copy of string str2

    cout << str0 << endl;
    cout << str2 << endl;
    cout << str3 << endl;

    return 0;
}
