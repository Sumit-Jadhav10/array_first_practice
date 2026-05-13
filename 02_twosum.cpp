// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,19,6,7,6,5,4,};
//     int size=sizeof(arr)/sizeof(int);
//     int target=3;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i+1; j < size; j++)
//         {
//             if (arr[i]+arr[j]==target)
//             {
//                 cout<<i<<","<<j;
//             }
            
//         }
        
//     }
    
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,19,6,7,6,5,4,};
//     int size=sizeof(arr)/sizeof(int);
//     int target=3;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i+1; j < size; j++)
//         {
//             if (arr[i]+arr[j]==target)
//             {
//                 cout<<i<<","<<j;
//             }
            
//         }
        
//     }
    
//     return 0;
// }


#include <iostream>

using namespace std;
int main(){
    // long nums=n;
    
    double x=2.5;
    int n=5;
    double ans=1;
    if (n<0)
    {
        n=-n;
        x=1/x;
    }
    
    while(n>0){
        if (n%2==1)
        {
            ans*=x;
        }
        n/=2;
        x*=x;
        
    }
    cout<<ans;
    return 0;
}
