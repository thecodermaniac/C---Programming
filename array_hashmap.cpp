#include <iostream>
#include <unordered_map>

using namespace std;

int main(int argc, char const *argv[])
{
    int sum = 0;
    int exsum = 7;
    unordered_map<int, int> umap;
    int array[] = {1, 2, 6, 4, 3, 5};
    for (int i = 0; i < 6; i++)
    {
        sum = array[i] + sum;
        umap.insert(make_pair(sum, i));
        if (umap.find(sum - exsum) != umap.end())
        {
            cout << "index at " << umap[sum - exsum] + 1 << " index to " << i << endl;
            break;
        }
    }
    return 0;
}
