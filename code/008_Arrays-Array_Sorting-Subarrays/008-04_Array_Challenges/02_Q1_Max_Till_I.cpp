// Max till i

#include <iostream>

void maxTillI(int array[], int size)
{
    int mx = INT_MIN;
    for (size_t i = 0; i < size; i++)
    {
        if (mx < array[i])
        {
            mx = array[i];
        }
        std::cout << mx << std::endl;
    }
}

int main()
{
    // std::cout << "works" << std::endl;
    int size;
    std::cin >> size;
    int array[size];

    for (size_t i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }

    

    // Exercise Functions =>
    maxTillI(array, size);
    

    return 0;
}
