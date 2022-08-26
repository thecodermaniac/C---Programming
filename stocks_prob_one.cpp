#include <iostream>

using namespace std;

int maxprofit(int arr[], int size)
{
    int currmin = arr[0];
    int maxprofit = 0;
    for (int i = 0; i < size; i++)
    {
        if (currmin > arr[i])
        {
            currmin = arr[i];
        }
        if (arr[i] - currmin > maxprofit)
        {
            maxprofit = arr[i] - currmin;
        }
    }
    return maxprofit;
}

int main(int argc, char const *argv[])
{
    int stock_arr[] = {50,40,20,50,80,100};
    int size = sizeof(stock_arr) / sizeof(stock_arr[0]);
    cout << "The max profit: " << maxprofit(stock_arr, size);
    return 0;
}
