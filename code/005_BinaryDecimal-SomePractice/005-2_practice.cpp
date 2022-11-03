// Check if a number is prime or not
// Reverse a number
// Check if a number is Armstrong number or not

// print ASCII value of any given character
// Display all factors of a given number
// find the factorial of a given number
// find whether a given character is a vowel or a consonant

#include <iostream>
#include <cmath>
// #include <math.h>

void primeOrNot()
{
    // Check if a number is prime or not
    int n = 0;
    std::cin >> n;

    bool flag = 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // std::cout << i << std::endl;
            flag = 1;
            break;
        }
    }

    switch (flag)
    {
    case 0:
        // std::cout << n << std::endl;
        std::cout << "Prime" << std::endl;
        break;
    case 1:
        std::cout << "Non-prime" << std::endl;
        break;

    default:
        break;
    }
}

void reverseNumber()
{
    // Reverse a number
    int n = 0, reverse = 0;
    std::cin >> n;

    while (n > 0)
    {
        int lastDigit = n % 10;
        reverse = reverse * 10 + lastDigit;
        n = n / 10;
    }
    std::cout << reverse << std::endl;
}

void armstrongNumber()
{
    // Check if a number is Armstrong number or not
    int n = 0;
    std::cin >> n;

    double sum = 0;
    // int sum = 0;
    int originaln = n;

    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += pow(lastDigit, 3);
        // sum += lastDigit * lastDigit * lastDigit;
        n = n / 10;
    }

    if (sum == originaln)
    {
        std::cout << "Armstrong Number" << std::endl;
    }
    else
    {
        std::cout << "Not Armstrong Number" << std::endl;
    }
}

void asciiValue()
{
    // print ASCII value of any given character
    char ascii;
    std::cin >> ascii;

    int asciiValue = (int)ascii;

    std::cout << asciiValue << std::endl;
}

void factors()
{
    // Display all factors of a given number
    int n = 0;
    std::cin >> n;

    bool flag = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            std::cout << i << "  ";
        }
    }
    std::cout << std::endl;
}

void factorial()
{
    // find the factorial of a given number
    int n = 0;
    std::cin >> n;
    int facto = 1;
    while (n > 0)
    {
        facto = facto * n;
        n--;
    }
    std::cout << facto << std::endl;
}

void vowelConsonant()
{
    // find whether a given character is a vowel or a consonant
    char letter;
    std::cin >> letter;

    int value = (int)letter;
    if (value > 65 || value < 122)
    {
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
        {
            std::cout << "Vowel" << std::endl;
        }
        else if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
        {
            std::cout << "Vowel" << std::endl;
        }
        else
        {
            std::cout << "Consonant" << std::endl;
        }
    }
    else
    {
        std::cout << "Try Again!" << std::endl;
    }
}

int main()
{
    // primeOrNot();
    // reverseNumber();
    // armstrongNumber();

    // asciiValue();
    // factors();
    // factorial();
    // vowelConsonant();

    return 0;
}
