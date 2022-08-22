#include <iostream>
#include <algorithm>

using namespace std;

void majorityele(int *arr, int size)
{
    int item_count = 1;
    int item_index = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] == arr[item_index])
        {
            item_count++;
        }
        else
        {
            item_count--;
        }
        if (item_count == 0)
        {
            item_index = i;
            item_count = 1;
        }
    }
    item_count=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[item_index])
        {
            item_count++;
        }
    }

    if (item_count > size / 2)
    {
        cout << "the majority element is: " << arr[item_index];
    }
    else
    {
        cout << "No majority element";
    }
}

int main(int argc, char const *argv[])
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int size = sizeof(arr) / sizeof(int);

    majorityele(arr, size);

    return 0;
}
