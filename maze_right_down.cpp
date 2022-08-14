#include <iostream>

using namespace std;

int ways_finder(int rows, int col)
{
    if (rows == 1 || col == 1)
    {
        return 1;
    }
    return ways_finder(rows - 1, col) + ways_finder(rows, col - 1);
}

int main(int argc, char const *argv[])
{
    int row, col;
    cin >> row >> col;
    int ways = ways_finder(row, col);
    cout << ways;
    return 0;
}
