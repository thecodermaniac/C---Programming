#include <iostream>

using namespace std;

long long int exponent_calc(long long num, long long pow)
{
    long long result = 1;
    long long mod = 1000000007;
    while (pow > 0)
    {
        if (pow & 1)
        {
            result = ((result % mod) * (num % mod)) % mod;
        }
        num = (num % mod * num % mod) % mod;
        pow = pow / 2;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    long long num, pow, res;
    cin >> num >> pow;
    res = exponent_calc(num, pow);
    cout << res;
    return 0;
}
