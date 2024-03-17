/**
 * Move all 'x' to the end of the string
 * "axxbdxcefxhix"
 * "abdcefhixxxxx"
 */

#include <iostream>
using namespace std;

string moveAllX(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = moveAllX(s.substr(1));
    if (ch == 'x')
    {
        return ans + ch;
    }
    return ch + ans;
}

int main()
{
    string s = "axxbdxcefxhix";
    cout << moveAllX(s) << endl;

    return 0;
}