#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec = {12, 34, 87, 9};
    vector<int>::iterator i;
    for (i = vec.begin(); i != vec.end(); i++)
    {
        cout << *i;
    }

    return 0;
}
