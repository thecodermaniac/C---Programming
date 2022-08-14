#include <iostream>

using namespace std;
int is_safe(int **arr, int row, int col)
{
    int i, j;
    for (i = 0; i < col; i++)
    {
        if (arr[row][i])
        {
            return 0;
        }
    }
    for (i = row, j = col; i >= 0 && j >= 0; j--, i--)
    {
        if (arr[i][j])
        {
            return 0;
        }
    }
    for (i = row, j = col; i >= 0 && j < 4; i--, j++)
    {
        if (arr[i][j])
        {
            return 0;
        }
    }
    return 1;
}
int queen_solver(int **queen, int col, int n)
{
    if (col >= n)
    {
        return 1;
    }
    for (int row = 0; row < n; row++)
    {
        if (is_safe(queen, row, col) == 1)
        {
            queen[row][col] = 1;

            if (queen_solver(queen, col + 1, n) == 1)
            {
                return 1;
            }
            queen[row][col] = 0;
        }
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    int **queen;
    queen = new int *[4];
    for (int i = 0; i < 4; i++)
    {
        queen[i] = new int[4];
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            queen[i][j] = 0;
        }
    }
    queen_solver(queen, 0, 4);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << " " << queen[i][j];
        }
        cout << endl;
    }
    return 0;
}
