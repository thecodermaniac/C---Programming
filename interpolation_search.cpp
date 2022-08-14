#include <iostream>
#include <algorithm>
using namespace std;

int interpolation_search(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        int pos = start + (((end - start) / (arr[end] - arr[start])) * (key - arr[start]));
        if (key == arr[pos])
        {
            return 1;
        }
        else if (key > arr[pos])
        {
            start = pos + 1;
        }
        else
        {
            end = pos - 1;
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int arr[] = {4, 1, 3, 2, 9, 7, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + len);
    int flag = interpolation_search(arr, len, 7);
    cout << flag;
    return 0;
}
