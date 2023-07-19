#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string str1;
    string str2;

    // Input String

    // Using cin
    cin >> str1; // only inputs till whitespace(' ')
    // Using getline
    getline(cin, str2); // input till newline

    // Output String
    cout << "'" << str1 << "'" << endl;
    cout << "'" << str2 << "'" << endl;

    return 0;
}
