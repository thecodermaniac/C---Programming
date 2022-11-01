#include <iostream>
#include <vector>

using namespace std;

void find_sum(int ind, vector<int> arr, vector<vector<int>> &res, vector<int> tmp, int currsum)
{
    if (ind == arr.size())
    {
        if (currsum == 0)
        {
            res.push_back(tmp);
        }
        return;
    }
    if (arr[ind] <= currsum)
    {
        tmp.push_back(arr[ind]);
        find_sum(ind, arr, res, tmp, currsum - arr[ind]);
        tmp.pop_back();
    }

    find_sum(ind + 1, arr, res, tmp, currsum);
}
vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> res;
    vector<int> tmp;
    find_sum(0, candidates, res, tmp, target);
    return res;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {2, 3, 6, 7};
    int sum = 7;
    auto res = combinationSum(arr, sum);
    for (auto it : res)
    {
        for (auto lt : it)
        {
            cout << " " << lt;
        }
        cout << "\n";
    }

    return 0;
}