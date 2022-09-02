#include <iostream>

using namespace std;

int modified_bin_srh(int arr[], int key, int low, int high)
{

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[low] < arr[mid])
        {
            if (key >= arr[low] && key < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (key >= arr[mid] && key < arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {9, 10, 15, 2, 3, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "the element's index is :" << modified_bin_srh(arr, 10, 0, size - 1) + 1;
    return 0;
}
