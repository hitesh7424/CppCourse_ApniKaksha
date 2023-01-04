#include <iostream>

void printLight(int a = 9)
{
    for (size_t i = 0; i < a; i++)
    {
        std::cout << " ";
    }
}

void printDark(int a = 9)
{

    for (size_t i = 0; i < a; i++)
    {
        std::cout << "█";
    }
}
void printBorderCol(bool check, int a = 38)
{

    if ((check))
    {
        return;
    }

    for (size_t i = 0; i < a; i++)
    {
        std::cout << "░░";
    }
    if (!(38 - a))
    {
        std::cout << std::endl;
    }
}
int main()
{
    for (size_t l = 0; l < 8; l++)
    {
        printBorderCol(l);

        for (size_t k = 0; k < 4; k++)
        {
            printBorderCol(0, 1);

            for (size_t j = 0; j < 4; j++)
            {
                if (!(l % 2))
                {
                    printDark();
                    printLight();
                }
                if (l % 2)
                {
                    printLight();
                    printDark();
                }
            }
            printBorderCol(0, 1);
            std::cout << std::endl;
        }
        printBorderCol(l - 7);
    }
    return 0;
}
