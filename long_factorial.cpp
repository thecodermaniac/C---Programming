#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num, iter = 1, len = 1, count = 0, carry = 0;
    int arr[500] = {1};
    cin >> num;
    while (iter <= num)
    {
        count = 0;
        carry = 0;
        while (count < len)
        {
            arr[count] = arr[count] * iter;
            arr[count] = arr[count] + carry;
            carry = arr[count] / 10;
            arr[count] = arr[count] % 10;
            count++;
        }
        while (carry != 0)
        {
            arr[len] = carry % 10;
            carry = carry / 10;
            len++;
        }

        iter++;
    }
    len--;
    cout << "the factorial is ";
    while (len >= 0)
    {
        cout << arr[len];
        len--;
    }

    return 0;
}
