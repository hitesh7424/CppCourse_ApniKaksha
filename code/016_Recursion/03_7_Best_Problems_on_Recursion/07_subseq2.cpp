#include <iostream>
using namespace std;

void subseq2(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << "\n";
        return;
    }

    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);

    subseq2(ros, ans);
    subseq2(ros, ch + ans);
    subseq2(ros, to_string(code) + ans);
}

int main()
{
    string s = "AB";

    subseq2("AB", "");

    return 0;
}
