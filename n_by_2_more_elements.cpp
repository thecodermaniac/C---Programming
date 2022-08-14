#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1, 5, 7, 5, 3, 5, 2, 5};
    int max_no, count = 0;
    max_no = arr[0];
    for (int i = 0; i < 8; i++)
    {
        if (max_no == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            max_no = arr[i];
            count = 1;
        }
    }
    cout << max_no;
    return 0;
}
