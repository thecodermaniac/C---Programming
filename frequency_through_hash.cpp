#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void frequency_of_element(vector<int> &vec, int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[vec[i]]++;
    }
    for (int i = 0; i < n; i++)
        if (mp[vec[i]] != -1)
        {
            cout << vec[i] << " " << mp[vec[i]] << endl;
            mp[vec[i]] = -1;
        }
}
int main(int argc, char const *argv[])
{
    int n, t;
    cout << "no of elements: ";
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        vec.push_back(t);
    }

    frequency_of_element(vec, n);
    return 0;
}
