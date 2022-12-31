// Name sorter
// *based on first letter

#include <iostream>
#include <string>

void strCaptalize(std::string arr[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < arr[i].length(); j++)
        {
            if ((int)arr[i][j] > 96 && (int)arr[i][j] < 122)
            {
                arr[i][j] = (int)arr[i][j] - 32;
            }

            std::cout << arr[i][j] << std::endl;
        }
        std::cout << std::endl;
    }
}

void selectionSort(std::string arr[], int size)
{
    // int timeComplexity = 0;

    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = i + 1; j < size; j++)
        {

            if (arr[j][0] < arr[i][0])
            {
                std::string temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            // timeComplexity++;
        }
    }
}

int main(int argc, char const *argv[])
{

    int size = 4;
    // std::cin >> size;

    // int array[size];

    std::string array[] = {"Hitesh", "Nitesh", "Khushi", "Pankaj", "Devesh"};
    size = sizeof(array) / 4;

    // for (size_t i = 0; i < size; i++)
    // {
    //     std::cin >> array[i];
    // }

    selectionSort(array, size);

    for (size_t i = 0; i < size; i++)
    {
        std::cout << array[i] << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
