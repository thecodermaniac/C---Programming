#include <iostream>
#include <algorithm>

using namespace std;

int maxwatertrap(int arr[], int size)
{
    int left_arr[size];
    int right_arr[size];
    int max_water = 0;
    int left_max = arr[0];
    int right_max = arr[size - 1];
    for (int i = 0; i < size; i++)
    {

        if (arr[i] > left_max)
        {
            left_max = arr[i];
        }
        left_arr[i] = left_max;
    }
    for (int i = size - 1; i >= 0; i--)
    {

        if (arr[i] > right_max)
        {
            right_max = arr[i];
        }
        right_arr[i] = right_max;
    }
    for (int i = 0; i < size; i++)
    {
        max_water = max_water + (min(left_arr[i], right_arr[i]) - arr[i]);
    }
    return max_water;
}

int main(int argc, char const *argv[])
{
    int arr[] = {3, 1, 2, 4, 0, 1, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum water trapped is: " << maxwatertrap(arr, size);
    return 0;
}
