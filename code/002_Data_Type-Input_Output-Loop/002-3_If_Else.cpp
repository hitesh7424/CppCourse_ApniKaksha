// IF ELSE

// [29] Find Greatest Number Out of of Three Numbers
// [62] Checking a number is prime or not
// [80] Using If Else as Secret message box

/*

if(condition is true){
    // body
}
else{
    // body
}

*/

#include <iostream>
using namespace std;

void inOut()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);   
    freopen("../output.txt", "w", stdout); 
#endif
}

// // Find Greatest Number Out of of Three Numbers

// int main()
// {
//     inOut();
//     int a, b, c;
//     cin >> a >> b >> c;

//     if (a > b)
//     {
//         if (a > c)
//         {
//             cout << a << endl;
//         }
//         else
//         {
//             cout << c << endl;
//         }
//     }
//     else
//     {
//         if (b > c)
//         {
//             cout << b << endl;
//         }
//         else
//         {
//             cout << c << endl;
//         }
//     }
//     return 0;
// }

// // Checking a number is prime or not
// int main()
// {
//     inOut();
//     int n;
//     cin >> n;
//     if (n % 2 == 0)
//     {
//         cout << "Even " << endl;
//     }
//     else
//     {
//         cout << "Odd " << endl;
//     }

//     return 0;
// }

// Using If Else as Secret message box

int main()
{
    inOut();

    int passwd;

    cout << "\rPassword: ";
    cin >> passwd;
    cout << endl;

    if (passwd == 448374)
    {
        cout << "Secret Message" << endl;
    }
    else
    {
        cout << "username or password wrong" << endl;
    }
}
