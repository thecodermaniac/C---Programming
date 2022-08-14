#include <iostream>

using namespace std;

int row_checker(int arr[9][9], int row, int col, int num)
{
    for (int row = 0; row < 9; row++)
    {
        if (arr[row][col] == num)
        {
            return 0;
        }
    }
    return 1;
}
int col_checker(int arr[9][9], int row, int col, int num)
{
    for (int col = 0; col < 9; col++)
    {
        if (arr[row][col] == num)
        {
            return 0;
        }
    }
    return 1;
}
int box_checker(int arr[9][9], int start_row, int start_col, int num)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (arr[row + start_col][col + start_col] == num)
            {
                return 0;
            }
        }
    }
    return 1;
}
int is_safe_checker(int arr[9][9], int row, int col, int num)
{
    if (box_checker(arr, row - row % 3, col - col % 3, num) && col_checker(arr, row, col, num) && row_checker(arr, row, col, num))
    {
        return 1;
    }
    return 0;
}
int unassigned_check(int arr[9][9], int &row, int &col)
{
    for (int row = 0; row < 9; row++)
    {
        for (int col = 0; col < 9; col++)
        {
            if (arr[row][col] == 0)
            {
                return 1;
            }
        }
    }
    return 0;
}
int sudoku_solver(int arr[9][9])
{
    int row, col;
    if (!unassigned_check(arr, row, col))
    {
        return 1;
    }
    for (int i = 1; i <= 9; i++)
    {
        if (is_safe_checker(arr, row, col, i))
        {
            arr[row][col] = i;
            if (sudoku_solver(arr))
            {
                return 1;
            }
            arr[row][col] = 0;
        }
    }
    return 0;
}
void print_arr(int arr[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << " " << arr[i][j];
        }
        cout << endl;
    }
}
int main(int argc, char const *argv[])
{
    int arr[9][9] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                     {5, 2, 0, 0, 0, 0, 0, 0, 0},
                     {0, 8, 7, 0, 0, 0, 0, 3, 1},
                     {0, 0, 3, 0, 1, 0, 0, 8, 0},
                     {9, 0, 0, 8, 6, 3, 0, 0, 5},
                     {0, 5, 0, 0, 9, 0, 6, 0, 0},
                     {1, 3, 0, 0, 0, 0, 2, 5, 0},
                     {0, 0, 0, 0, 0, 0, 0, 7, 4},
                     {0, 0, 5, 2, 0, 6, 3, 0, 0}};
    sudoku_solver(arr);
    print_arr(arr);
    return 0;
}
