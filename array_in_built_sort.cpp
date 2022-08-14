#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {9, 1, 5, 5, 2, 5, 7};
    sort(arr, arr + 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i];
    }

    return 0;
}
