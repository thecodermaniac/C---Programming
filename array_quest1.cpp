#include <iostream>
#include <unordered_set>
using namespace std;

int main(int argc, char const *argv[])
{
    int cont = 0;
    unordered_set<int> s;
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {2, 3, 6};
    for (int i = 0; i < 5; i++)
    {
        s.insert(array1[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        if (s.find(array2[i]) != s.end())
        {
            cont++;
            s.erase(array2[i]);
        }
    }
    cout << cont;
    return 0;
}
