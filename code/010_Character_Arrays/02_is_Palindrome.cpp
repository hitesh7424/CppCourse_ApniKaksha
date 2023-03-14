/**
 * @file 02_is_Palindrome.cpp
 * @date 2023-03-14
 * @brief Palindrome chaecker
 */

/*
Input1:
racecar

Output:
word is palindrome

Input2:
hitesh

Output:
word is not palindrome

*/

#include <iostream>
using namespace std;

bool is_Palindrome(char arr[]);

int main(int argc, char const *argv[])
{
    char arr[100];
    cin >> arr;

    if (is_Palindrome(arr))
    {
        cout << "word is palindrome\n";
    }
    else
    {
        cout << "word is not palindrome\n";
    }

    return 0;
}

bool is_Palindrome(char arr[])
{
    bool check = true;
    int length = 0;
    while (arr[length] != '\0')
    {
        length++;
    }

    for (int i = 0; i < length / 2; i++)
    {
        if (arr[i] != arr[length - i - 1])
        {
            check = false;
            break;
        }
    }

    return check;
}
