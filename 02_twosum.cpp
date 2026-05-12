#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,19,6,7,6,5,4,};
    int size=sizeof(arr)/sizeof(int);
    int target=3;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i]+arr[j]==target)
            {
                cout<<i<<","<<j;
            }
            
        }
        
    }
    
    return 0;
}