// Break & Continue

/*

continue; // used to skip to next iterration of the loop
break; // used to terminate the loop

*/

#include <iostream>
using namespace std;
void io()
{
#ifndef IN_OUT
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
}

int main()
{
    io();
    int pocketMoney = 3000;
    for (int date = 0; date <= 30; date++)
    {
        if (date % 2 == 0)
        {
            continue;
        }
        if (pocketMoney == 0)
        {
            break;
        }

        cout << "date:" << date << endl
             << "Go out today" << endl;
        pocketMoney = pocketMoney - 300;
    }

    return 0;
}