// // Function challenges

// Print all prime numbers between 2 given numbers
//  Fibonacci sequence (mātrāmeru, by Pingala)
// Factorial of a number n
// Calculate nCr
// pascal triangle with nCr (meru or meru-prastāra)

// Sum of first n natural numbers
// check pythogorian triplet
// Conversions:
//      1)binary to decimal
//      2)ocatal to decimal
//      3)hexadecimal to decimal
//      4)decimal to binary
//      5)decimal to octal
//      6)decimal to hexadecimal
// add two bimary numbers

#include <iostream>
#include <cmath>
using namespace std;

// Print all prime numbers between 2 given numbers
bool isPrime(int num)
{
    if (num == 0 or num == 1)
    {
        return false;
    }

    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

void primesbetween(int a, int b)
{
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i < b; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
}

//  Fibonacci sequence (mātrāmeru, by Pingala)
void fib(int num)
{
    size_t t1, t2;
    t1 = 0;
    t2 = 1;
    cout << t1 << endl;
    for (int i = 1; i < num; i++)
    {
        if (i == 1)
        {
            cout << t2 << endl;
            continue;
        }

        size_t nextTerm = t1 + t2;
        cout << nextTerm << endl;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}

// Factorial of a number n
size_t factorial(int num)
{
    size_t facto = 1;
    for (int i = 1; i <= num; i++)
    {
        facto = facto * i;
    }
    return facto;
}

// Calculate nCr

size_t nCr(int n, int r)
{
    size_t ncr = factorial(n) / (factorial(n - r) * factorial(r));
    return ncr;
}

// pascal triangle with nCr (meru or meru-prastāra)
void pascalTriagle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }
}

// Sum of first n natural numbers
size_t sumUptoN(int n)
{
    size_t sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

// check pythogorian triplet
bool pythagorianTriplet(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;

    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = y;
        c = x;
    }

    if (a * a == b * b + c * c)
    {
        return true;
    }
    return false;
}

// Conversions:
//      1)binary to decimal
//      2)ocatal to decimal
//      3)hexadecimal to decimal
//      4)decimal to binary
//      5)decimal to octal
//      6)decimal to hexadecimal

// 1)binary to decimal
int binary2Decimal(int binary)
{
    int decimal = 0, placeV = 0;

    while (binary > 0)
    {
        int digit = binary % 10;
        decimal += digit * pow(2, placeV);
        // cout << digit << "\t" << decimal << "\t" << binary << "\t" << placeV << "\t" << digit * pow(2, placeV) << endl;
        binary /= 10;
        placeV += 1;
    }
    return decimal;
}

// 2)ocatal to decimal
int octal2Decimal(int octal)
{
    int decimal = 0, placeV = 0;

    while (octal > 0)
    {
        int digit = octal % 10;
        decimal += digit * pow(8, placeV);
        // cout << digit << "\t" << decimal << "\t" << binary << "\t" << placeV << "\t" << digit * pow(2, placeV) << endl;
        octal /= 10;
        placeV += 1;
    }
    return decimal;
}

// 3)hexadecimal to decimal
int hex2Decimal(string hex)
{
    int decimal = 0;
    int size = hex.size();
    int placeV = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        int check = 0;
        if (hex[i] >= '0' and hex[i] <= '9')
        {
            decimal += (hex[i] - '0') * pow(16, placeV);
        }
        else if (hex[i] >= 'A' and hex[i] <= 'F')
        {
            decimal += (hex[i] - 'A' + 10) * pow(16, placeV);
        }
        else if (hex[i] >= 'a' and hex[i] <= 'f')
        {
            decimal += (hex[i] - 'a' + 10) * pow(16, placeV);
        }

        //		cout<<decimal<<"\t"<<hex<<"\t"<<placeV<<"\t"<<size<<"\t"<<">"<<hex[i]<<"<"<<endl;
        placeV++;
    }
    return decimal;
}

// 4)decimal to binary
int decimal2Binary(int decimal)
{
    int binary = 0, placeV = 1;

    while (decimal > 0)
    {
        int digit = decimal % 2;
        binary += digit * placeV;
        // cout << digit << "\t" << decimal << "\t" << binary << "\t" << placeV << "\t" << digit * pow(2, placeV) << endl;
        decimal /= 2;
        placeV *= 10;
    }
    return binary;
}

// 5)decimal to octal
int decimal2Octal(int decimal)
{
    int binary = 0, placeV = 1;

    while (decimal > 0)
    {
        int digit = decimal % 8;
        binary += digit * placeV;
        // cout << digit << "\t" << decimal << "\t" << binary << "\t" << placeV << "\t" << digit * pow(2, placeV) << endl;
        decimal /= 8;
        placeV *= 10;
    }
    return binary;
}

// 6)decimal to hexadecimal
string decimal2hex(int decimal)
{
    string hex = "";
    for (int i = 0; decimal > 0; i++)
    {
        char a;
        int digit = decimal % 16;
        if (digit < 10)
        {
            hex.push_back('0' + digit);
        }
        else if (digit > 9)
        {
            hex.push_back('A' + digit - 10);
        }
        // cout<<"#{"<<decimal<<"\t>"<<hex<<"<\t"<<digit<<"\t>"<<hex[i]<<"<\t}#"<<endl;
        decimal /= 16;
    }
    int size = hex.size();
    for (int i = 0; i <= (size - 1) / 2; i++)
    {
        char temp = hex[i];
        hex[i] = hex[size - i - 1];
        hex[size - i - 1] = temp;
        // cout<<size<<endl;
    }
    return hex;
}

// add two bimary numbers
int binaryAdd(int a, int b)
{
    int carry = 0, sum = 0, place = 1;
    int maxi = max(a, b);

    // cout << "x\ty\tdigit\tcarry\tsum\tplace" << endl;
    while (maxi > 0 or carry == 1)
    {
        int x, y, digit = 0;
        x = a % 10;
        y = b % 10;
        if (x + y + carry == 1)
        {
            carry = 0;
            digit = 1;
        }
        else if (x + y + carry == 2)
        {
            carry = 1;
            digit = 0;
        }
        else if (x + y + carry == 3)
        {
            carry = 1;
            digit = 1;
        }

        // cout << x << "\t" << y << "\t" << digit << "\t" << carry << "\t" << sum << "\t" << place << endl;
        sum = sum + digit * place;

        place *= 10;
        a /= 10;
        b /= 10;
        maxi /= 10;
    }
    return sum;
}

int main()
{
    int a = 5, b = 20;
    // size_t ans;
    // cin >> a;
    // cin >> b;

    // primesbetween(a, b);
    // fib(a);

    // ans = factorial(a);
    // cout << ans << endl;

    // ans = nCr(a, b);
    // cout << ans << endl;

    // pascalTriagle(a);

    // cout << sumUptoN(10) << endl;

    // if (pythagorianTriplet(4, 3, 5))
    // {
    //     cout << "true" << endl;
    // }

    // cout << binaryAdd(10101, 11010) << endl;
    cout << "101101 :" << binary2Decimal(101101) << endl;
    cout << "45     :" << octal2Decimal(45) << endl;
    cout << "1CF    :" << hex2Decimal("1CF") << endl;
    cout << "1cf    :" << hex2Decimal("1cf") << endl;
    cout << "100    :" << decimal2hex(100) << endl;
    cout << "45     :" << decimal2Binary(45) << endl;
    cout << "37     :" << decimal2Octal(37) << endl;

    return 0;
}
