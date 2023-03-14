/**
 * @file 03_Largest_Word_In_Sentance.cpp
 * @date 2023-03-14
 * @brief find largest word in a sentance
 */

/*
Input:
20
Do od die diet

Output:
4
diet

*/

#include <iostream>
using namespace std;

int main()
{

    int n = 0;
    cin >> n;

    cin.ignore();
    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int st = 0, maxst = 0;
    int currLen = 0, maxLen = 0;

    while (true)
    {
        if (arr[i] == ' ' or arr[i] == '\0')
        {
            if (maxLen < currLen)
            {
                maxLen = currLen;
                maxst = st;
            }
            st = i + 1;
            currLen = 0;
        }
        else
        {
            currLen++;
        }

        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }

    cout << maxLen << endl;

    for (int i = 0; i < maxLen; i++)
    {
        cout << arr[i + maxst];
    }
    cout << endl;

    return 0;
}
