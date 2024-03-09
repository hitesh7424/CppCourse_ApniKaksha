#include <iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }

    bool restArray = sorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && restArray);
}

int main()
{
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    cout << sorted(arr, n) << endl;
    return 0;
}