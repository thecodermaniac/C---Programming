#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {5, -4, -2, 6, -1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max_sum = 0, curr_sum = 0;
    for (int i = 0; i < size; i++)
    {
        curr_sum = curr_sum + arr[i];
        if (max_sum < curr_sum)
        {
            max_sum = curr_sum;
        }
        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
    }
    cout << "the max sum is " << max_sum;
    return 0;
}
