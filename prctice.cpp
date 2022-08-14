#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    int stall[m][10] = {{1, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    int person[n][10] = {{1, 0, 0, 1, 0, 0, 0, 0, 0}};
    int q = 1;
    int query[q][2] = {{1, 1}};
    int temp_i, temp_j;
    for (int i = 0; i < q; i++)
    {
        temp_i = query[i][0];
        temp_j = query[i][1];
        if (person[temp_i - 1][temp_j - 1] == 1 && stall[temp_j - 1][temp_j - 1] == 1)
        {
            cout << "1" << endl;
        }
    }
    return 0;
}