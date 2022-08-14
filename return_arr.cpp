#include <iostream>

using namespace std;

int *create_array(int size)
{
    int *arr = new int[size];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i;
    }
    return arr;
}

int main(int argc, char const *argv[])
{
    int *arr;
    arr = create_array(5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    return 0;
}
