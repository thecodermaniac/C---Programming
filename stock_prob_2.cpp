#include <iostream> //problem ache

using namespace std;

int main(int argc, char const *argv[])
{

    int profit = 0;
    int stock_arr[] = {4, 3, 1, 2, 5, 6};
    int min = stock_arr[0];
    for (int i = 0; i < 6; i++)
    {
        if (min > stock_arr[i])
        {
            min = stock_arr[i];
        }
        if (stock_arr[i] - min > profit)
        {
            profit = stock_arr[i] - min;
        }
    }
    cout << "max profit " << profit;
    return 0;
}
