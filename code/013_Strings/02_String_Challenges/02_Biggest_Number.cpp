#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    // form biggest number from the numeric string

    string s = "365726";

    sort(s.begin(), s.end(), greater<int>());
    cout << s << endl;

    return 0;
}
