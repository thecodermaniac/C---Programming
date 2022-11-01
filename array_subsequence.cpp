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
void printsubsequence(int ind, vector<int> arr, vector<int> ans)
{
    if (ind >= arr.size())
    {
        print(ans);
        return;
    }
    ans.push_back(arr[ind]);
    printsubsequence(ind + 1, arr, ans);
    ans.pop_back();
    printsubsequence(ind + 1, arr, ans);
    return;
}

void subsequence(vector<int> arr)
{
    vector<int> ans;
    printsubsequence(0, arr, ans);
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    subsequence(arr);
    return 0;
}
