#include <iostream>
#include <algorithm>

using namespace std;

class dual
{
public:
    int key, value;
};

int main(int argc, char const *argv[])
{
    int arr[] = {5, 5, 5, 5, 1, 3, 2, 2, 7, 5, 4, 1};
    int j = 0;
    dual temp[14];
    sort(arr, arr + 12);
    temp[0].key = arr[0];
    temp[0].value = 0;
    for (int i = 0; i < 12; i++)
    {
        if (temp[j].key == arr[i])
        {
            temp[j].value++;
        }
        else
        {
            j++;
            temp[j].key = arr[i];
            temp[j].value = 1;
        }
    }
    for (int i = 0; i < j + 1; i++)
    {
        cout << "the key " << temp[i].key << " has frequency " << temp[i].value << endl;
    }
    return 0;
}
