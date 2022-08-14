#include <iostream>
#include <vector>
using namespace std;

template <class t>
void bubble_sort(vector<t> &arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    vector<int> vec = {65, 23, 12, 18, 19, 90, 78};
    vector<int>::iterator i;
    bubble_sort<int>(vec, 7);
    for (i = vec.begin(); i != vec.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}
