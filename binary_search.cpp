#include <iostream>
#include <algorithm>
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
        return arr[mid];
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

int main(int argc, char const *argv[])
{
    int arr[] = {2, 9, 3, 6, 1, 8, 4};
    int len = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + len);
    int key = recurse_binary_srh(arr, 0, len - 1, 10);
    cout << key;
    return 0;
}
