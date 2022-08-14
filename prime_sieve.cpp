#include <iostream>

using namespace std;

int *prime_sieve(int size)
{
    int *arr = new int[size];
    for (int i = 2; i < size; i++)
    {
        arr[i] = 1;
    }
    arr[0] = 0;
    arr[1] = 0;
    for (int i = 2; i * i <= size; i++)
    {
        for (int j = i * 2; j < size; j = j + i)
        {
            arr[j] = 0;
        }
    }
    return arr;
}

int main(int argc, char const *argv[])
{
    int num;
    int *prime = prime_sieve(10000);
    cin >> num;
    if (prime[num] == 1)
    {
        cout << "Its prime";
    }
    else
    {
        cout << "Its not prime";
    }

    return 0;
}
