#include <iostream>

using namespace std;

int recurse_binary_srh(int arr[], int start, int end, int key)
{
    int mid = (start + end) / 2;
    if (start > end)
    {
        return -1;
    }
    else if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] > key)
    {
        recurse_binary_srh(arr, start, mid - 1, key);
    }
    else
    {
        recurse_binary_srh(arr, mid + 1, end, key);
    }
}

int infinitesearch(int arr[], int key)
{
    int low = 0;
    int high = 1;
    while (arr[high] < key)
    {
        low = high;
        high = high * 2;
    }
    return recurse_binary_srh(arr, low, high, key);
}

int main(int argc, char const *argv[])
{
    int arr[] = {2, 3, 6, 8, 9, 10, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "the element's index is :" << infinitesearch(arr, 10) + 1;
    return 0;
}
