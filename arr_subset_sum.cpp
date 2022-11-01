#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

void getsetsum(int ind, vector<int> arr, vector<int> ans)
{
    if (ind >= arr.size())
    {
        cout << accumulate(ans.begin(), ans.end(), 0) << "\n";
        return;
    }
    ans.push_back(arr[ind]);
    getsetsum(ind + 1, arr, ans);
    ans.pop_back();
    getsetsum(ind + 1, arr, ans);
    return;
}

void subsetsum(vector<int> arr)
{
    vector<int> ans;
    getsetsum(0, arr, ans);
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, 3};
    subsetsum(arr);
    return 0;
}