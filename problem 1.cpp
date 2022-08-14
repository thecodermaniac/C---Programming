#include <iostream>
using namespace std;
class Average
{
    public:
static int calc(int num1,int num2,int num3);
    
};
int Average::calc(int num1,int num2,int num3)
{
    int avg=(num1+num2+num3)/3;
    return avg;
}
int main(int argc, char const *argv[])
{
    int a,b,c;
    cout<<"Enter the number for average";
    cin>>a>>b>>c;
    int avg=Average::calc(a,b,c);
cout<<"the average is"<<avg;
    return 0;
}


