#include <iostream>

using namespace std;

bool stringpalindrome(char str[], int left, int right)
{
    if (left >= right)
    {
        return true;
    }
    if (str[left] != str[right])
    {
        return false;
    }
    stringpalindrome(str, left + 1, right - 1);
    return true;
}

int main(int argc, char const *argv[])
{
    char str[] = "ababac";
    int len = sizeof(str) / sizeof(str[0]);
    int low = 0, high = len - 2, flag = 0;
    while (low < high) // iterative way
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
    // cout << flag;
    cout << stringpalindrome(str, 0, len-2);
    return 0;
}
