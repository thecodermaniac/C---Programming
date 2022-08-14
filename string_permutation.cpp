#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void permute_string(string str, int low, int high)
{
    if (low == high)
    {
        cout << str << endl;
        return;
    }
    for (int i = low; i <= high; i++)
    {
        swap(str[low], str[i]);
        permute_string(str, low + 1, high);
        swap(str[low], str[i]);
    }
}

int main(int argc, char const *argv[])
{
    string str = "abc";
    permute_string(str, 0, str.length() - 1);
    return 0;
}
