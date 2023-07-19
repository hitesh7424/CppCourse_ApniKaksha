#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string s = "Cold";
    // Different Functions of Strings

    // 1. append() or '+' or '+=' can be used to append string
    // Time Complexity is O(N); N = size of new string
    s = "Hot";
    s.append("Cold");
    cout << s << endl; // HotCold

    s = "Luke";
    s = s + "Warm";
    cout << s << endl; // LukeWarm

    // 2. assign() or '=' operator can be used to  assign new string
    s = "TooCold";
    s.assign("Hot");
    cout << s << endl; // Hot

    s = "Cold";
    cout << s << endl; // Cold

    // 3. at() or '[]' : returns character at particular position
    // Time Complexity is O(1)
    s = "Hitesh";
    cout << s.at(1) << endl; // i
    cout << s[2] << endl;    // t

    // 4. begin() : returns iterator point to the first character
    //    end() : returns iterator point to the last character
    // Time Complexity is O(1)
    s = "Hitesh";
    for (auto i = s.begin(); i < s.end(); i++)
    {
        cout << *i << "_";
    }
    cout << endl; // H_i_t_e_s_h_

    // 5. clear() : erases the string and assign with empty string("")
    // Time Complexity is O(1)
    s = "milk";
    s.clear();
    cout << s << endl; // returns nothing

    // 6. compare() : compares value and returns an integer accordingly
    // Time Complexity is O(M+N); M = size of 1st string; N = size of 2nd string
    string s1 = "abc", s2 = "xyz";
    cout << s1.compare(s2) << endl; // -193691671 means s1 is less than s2
    s1 = "abc", s2 = "abc";
    cout << s1.compare(s2) << endl; // 0 means s1 and s2 are equal
    s1 = "xyz", s2 = "abc";
    cout << s1.compare(s2) << endl; // 193691671 means s1 is greater than s2

    // 7. c_str() : converts to C-style string (null terminated)
    //              returns pointer to C-style String
    // Time Complexity is O(1)
    auto cstr = s1.c_str();

    // 8. empty() : retruns bool value ;true (1) if string is empty; false (0) if not empty
    // Time Complexity is O(1)
    s1 = "nicer";
    s1.clear();
    if (s1.empty())
    {
        cout << "given string is empty" << endl;
    }

    // 9. erase() : deletes substring of string
    // Time Complexity is O(N); N = size of new string
    s = "nincompoop";
    s.erase(3, 3);
    cout << s << endl; // ninpoop

    // 10. find() : Searches the string and returns the first occurrence of the parameter
    // Time Complexity is O(N); N = size of the string
    s = "nincompoop";
    cout << s.find("com") << endl; // 3

    // 11. insert() : Inserts additional characters into the string at a particular position
    // Time Complexity is O(N);N = size of the new strin
    s = "nincompoop";
    s.insert(3, "lol");
    cout << s << endl; // ninlolcompoop

    // 12. length(): Returns the length of the string.
    // Time Complexity is O(1)
    s = "nincompoop";
    cout << s.length() << endl; // 10

    // 13. resize() : Resize the string to the new length which can be less than or greater than the current length
    // Time Complexity is O(N); N = size of the new string
    s = "nincompoop";
    s.resize(6);
    cout << s << endl; // nincom

    // 14. size() : Returns the length of the string
    // Time Complexity is O(1)
    s = "nincompoop";
    cout << s.size() << endl; // 10

    // 15. substr() : Returns a string which is the copy of the substring
    // Time Complexity is O(N); N = size of the substring
    s = "nincompoop";
    cout << s.substr(3, 3) << endl; // com

    // 16. stoi(str): Returns the strings converted to int datatype
    s = "777";
    int x = stoi(s) + 222;
    cout << x << endl; // 999

    // 17. to_string(str) : returns string from int
    s = to_string(x);
    cout << s + "hi" << endl;

    return 0;
}
