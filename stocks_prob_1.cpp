#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int profit = 0;
    int stock_arr[] = {5, 2, 7, 3, 6, 1, 2, 4};
    for (int i = 1; i < 8; i++)
    {
        if (stock_arr[i] > stock_arr[i - 1])
        {
            profit = profit + (stock_arr[i] - stock_arr[i - 1]);
        }
    }
    cout << "The max profit: " << profit;
    return 0;
}
