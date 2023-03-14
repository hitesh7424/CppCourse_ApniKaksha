#include <iostream>
void selectionSort(int arr[], int size)
{
    for (size_t i = 0; i < size - 1; i++)
    {
        for (size_t j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void bubbleSort(int arr[], int size)
{
    int timeComplexity = 0;
    int counter = 1;
    while (counter < size - 1)
    {
        for (size_t i = 0; i < size - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
}

void insertionSort(int arr[], int size)
{

    for (size_t i = 1; i < size; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

int main()
{

    int size = 0;

    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    size = sizeof(array) / 4;

    selectionSort(array, size);
    bubbleSort(array,size);
    insertionSort(array,size);

    for (size_t i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}
