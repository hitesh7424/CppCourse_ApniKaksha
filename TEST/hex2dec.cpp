#include <iostream>
#include <cmath>
// 6)decimal to hexadecimal
std::string decimal2hex(int64_t decimal);
int hex2Decimal(std::string hex);

int main()
{
    
    std::cout << hex2Decimal("b00b") << std::endl;

    return 0;
}

// 3)hexadecimal to decimal
int hex2Decimal(std::string hex)
{
    int decimal = 0;
    int size = hex.size();
    int placeV = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        int check = 0;
        if (hex[i] >= '0' and hex[i] <= '9')
        {
            decimal += (hex[i] - '0') * (int)(pow(16, placeV) + 0.5);
        }
        else if (hex[i] >= 'A' and hex[i] <= 'F')
        {
            decimal += (hex[i] - 'A' + 10) * (int)(pow(16, placeV) + 0.5);
        }
        else if (hex[i] >= 'a' and hex[i] <= 'f')
        {
            decimal += (hex[i] - 'a' + 10) * (int)(pow(16, placeV) + 0.5);
        }

        //		std::cout<<decimal<<"\t"<<hex<<"\t"<<placeV<<"\t"<<size<<"\t"<<">"<<hex[i]<<"<"<<std::endl;
        placeV++;
    }
    return decimal;
}

std::string decimal2hex(int64_t decimal)
{
    std::string hex = "";
    for (int64_t i = 0; decimal > 0; i++)
    {
        char a;
        int64_t digit = decimal % 16;
        if (digit < 10)
        {
            hex.push_back('0' + digit);
        }
        else if (digit > 9)
        {
            hex.push_back('A' + digit - 10);
        }
        // std::cout<<"#{"<<decimal<<"\t>"<<hex<<"<\t"<<digit<<"\t>"<<hex[i]<<"<\t}#"<<std::endl;
        decimal /= 16;
    }
    int64_t size = hex.size();
    for (int64_t i = 0; i <= (size - 1) / 2; i++)
    {
        char temp = hex[i];
        hex[i] = hex[size - i - 1];
        hex[size - i - 1] = temp;
        // std::cout<<size<<std::endl;
    }
    return hex;
}