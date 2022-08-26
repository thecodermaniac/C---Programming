#include <iostream> //stocks bar bar kena jabe

using namespace std;

int maxprofit(int arr[], int size)
{
    int profit = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            profit = profit + (arr[i + 1] - arr[i]);
        }
    }
    return profit;
}

int main(int argc, char const *argv[])
{
    int stock_arr[] = {5, 2, 7, 3, 7, 1, 2, 4};
    int size = sizeof(stock_arr) / sizeof(stock_arr[0]);
    cout << "The max profit: " << maxprofit(stock_arr, size);
    return 0;
}
