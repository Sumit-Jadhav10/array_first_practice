#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(int);
    int i=0,j=size-1;
    int target=9;
    while (i<j)
    {
        if (arr[i]+arr[j]>target)
        {
            j--;
        }
        else if(arr[i]+arr[j]<target)
        {
            i++;
        }
        else{
            cout<<i<<","<<j;
            break;
        }
        
    }
    
    
    return 0;
}