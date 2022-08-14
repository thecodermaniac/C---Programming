#include <iostream>
#include <string>
using namespace std;

void power_set_of_string(string str, int pos, string curr_str)
{
    if (pos == str.length())
    {
        cout << curr_str << endl;
        return;
    }
    power_set_of_string(str, pos + 1, curr_str + str[pos]);
    power_set_of_string(str, pos + 1, curr_str);
}
int main(int argc, char const *argv[])
{

    string str("aritra");
    string str1;
    power_set_of_string(str, 0, str1);
    return 0;
}
