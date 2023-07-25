#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    string s = "tafuyrbzzzfalfr";

    int freq[26];

    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    // equivalent to for(int i = 0; i < s.size(); i++)
    // range based loop
    for (char c : s)
    {
        freq[c - 'a']++;
    }

    // char ans = 'a';
    string ans;
    int maxF = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = 'a' + i;
        }
        else if (freq[i] == maxF)
        {
            ans.push_back('a' + i);
        }
    }
    cout << ans << ' ' << maxF << endl;

    return 0;
}
