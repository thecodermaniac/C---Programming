#include <iostream>
#include <vector>

using namespace std;
void print(vector<int> arr)
{
    for (auto it : arr)
    {
        cout << " " << it;
    }
    cout << "\n";
}
bool printsubsequence(int ind, vector<int> arr, vector<int> ans, int sum, int currsum)
{
    if (ind >= arr.size())
    {
        if (currsum == sum)
        {
            print(ans);
            return true;
        }
        else
        {
            return false;
        }
    }
    ans.push_back(arr[ind]);
    currsum += arr[ind];
    if (printsubsequence(ind + 1, arr, ans, sum, currsum) == true)
        return true;
    ans.pop_back();
    currsum -= arr[ind];
    if (printsubsequence(ind + 1, arr, ans, sum, currsum) == true)
        return true;
    return false;
}

void subsequence(vector<int> arr, int sum)
{
    vector<int> ans;
    if (printsubsequence(0, arr, ans, sum, 0) == false)
        cout << " No sub array exists";
    // printsubsequence(0, arr, ans, sum, 0);
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {3, 2, 1, 4};
    int sum = 10;
    subsequence(arr, sum);
    return 0;
}
