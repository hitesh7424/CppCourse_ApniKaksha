#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s = "Hitesh";
    cin >> s;

    // cout << 'a' - 'A' << endl; // 32

    // convert to upper case
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
    }
    cout << s << endl;

    // convert to lower case
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    cout << s << endl;

    // convert with inbuilt function
    transform(s.begin(), s.end(), s.begin(), ::toupper); // to upper
    cout << s << endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower); // to lower
    cout << s << endl;

    return 0;
}
