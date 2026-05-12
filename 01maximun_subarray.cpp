// maximum subarray

#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,-3,4,-7,-4,9,1};
    int size=sizeof(arr)/sizeof(int);
    int current=0;
    int maxsum=INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        current+=arr[i];
        maxsum=max(current,maxsum);
        if (current<0)
        {
            current=0;
        }    
    }
    cout<<maxsum;
    
    return 0;
}