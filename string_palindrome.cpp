#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char str[] = "acacaca";
    int len = sizeof(str) / sizeof(str[0]);
    int low = 0, high = len - 2, flag = 0;
    while (low < high) //iterative way
    {
        if (str[low] == str[high])
        {
            low++;
            high--;
            flag = 1;
        }
        else
        {
            flag = 0;
            low++;
            high--;
        }
    }
    cout << flag;
    return 0;
}
