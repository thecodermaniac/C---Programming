#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1, 11, 6, 2, 7, 5};
    int flag = 0, sum = 10;
    int size = sizeof(arr) / sizeof(arr[0]);
    int low = 0, high = size;
    sort(arr, arr + size);
    while (low < high)
    {
        if (arr[low] + arr[high] < sum)
        {
            low++;
        }
        else if (arr[low] + arr[high] > sum)
        {
            high--;
        }
        else
        {
            flag = 1;
            low++;
            high--;
        }
    }
    cout << flag;
    return 0;
}
