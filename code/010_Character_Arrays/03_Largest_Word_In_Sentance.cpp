/**
 * @file 03_Largest_Word_In_Sentance.cpp
 * @date 2023-03-14
 * @brief find largest word in a sentance
 */

/*
Input1:
20
Do od die diet

Output1:
diet
4


Input2:
100
In this example, we declare a char array str with a length of 20 and initialize it with the

Output2:
initialize
10

*/

#include <iostream>
using namespace std;

void find_Largest_Word(const char *sentence, char *largest_word, int &largest_word_length);

int main()
{

    int n = 0;
    cin >> n;

    cin.ignore();
    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();

    char largest_word[50]; // create character array to hold largest word
    int largest_word_length = 0;

    find_Largest_Word(arr, largest_word, largest_word_length);

    std::cout << largest_word << std::endl;
    std::cout << largest_word_length << std::endl;

    return 0;
}

void find_Largest_Word(const char *sentence, char *largest_word, int &largest_word_length)
{
    int i = 0;
    int st = 0, maxst = 0;
    int currLen = 0, maxLen = 0;

    while (true)
    {
        if (sentence[i] == ' ' || sentence[i] == '\0')
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

        if (sentence[i] == '\0')
        {
            break;
        }
        i++;
    }

    largest_word_length = maxLen;

    for (int i = 0; i < maxLen; i++)
    {
        largest_word[i] = sentence[i + maxst];
    }

    largest_word[maxLen] = '\0'; // add null terminator to largest word string
}
