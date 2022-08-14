#include <iostream>
#include "head container/age.h"
using namespace std;

int main(int argc, char const *argv[])
{
    fun per1;
    cout << "enter a your age:";
    per1.set_age();
    cout << "your age: ";
    per1.get();
    return 0;
}
