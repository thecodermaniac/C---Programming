#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void string_permute(string str, int low, int high)
{
    if (low == high)
    {
        cout << str << endl;
        return;
    }
    for (int i = low; i <= high; i++)
    {
        swap(str[low], str[i]);
        string_permute(str, low + 1, high);
        swap(str[low], str[i]); // backtrack hoche ekhane karon jeta swap chilo abar swap kore same state....e fire jachi
    }
}

int main(int argc, char const *argv[])
{
    string str = "aritra";
    string_permute(str, 0, str.length() - 1);
    return 0;
}
