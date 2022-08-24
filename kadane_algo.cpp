#include <iostream>
using namespace std;

void maxarrsum(int arr[],int size)
{
    int maxsum=0;
    int currsum=0;
    int startindex=0,endindex=0;
    for(int i=0;i<size;i++)
    {
        currsum=currsum+arr[i];
        
        if(currsum>maxsum)
        {
            endindex=i;
            maxsum=currsum;
        }
        if(currsum<0)
        {
            maxsum=0;
            startindex=i;
        }
    }
    for(int i=startindex+1;i<=endindex;i++)
    {
        cout << arr[i];
    }
}
int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    maxarrsum(arr,size);
    return 0;
}
