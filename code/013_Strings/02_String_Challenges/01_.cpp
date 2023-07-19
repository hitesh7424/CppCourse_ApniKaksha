#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    string s = "Enter Your Name:";
    cout << s << endl;
    getline(cin,s);
    sort(s.begin(),s.end());
    cout << s << endl;

    return 0;
}
