// #include <iostream>
// using namespace std;

// int find(int marks[],int sz, int target)
// {
//         for (int  i = 0; i < sz; i++)
//     {
//         if (marks[i]==target  )
//         {
//             cout<<i;
//         }
        
//     }

// }
// int main()
// {
//     int marks[5]={21,32,43,22,11};
//     int size =5;
//     int target=11;
// find(marks,size,target);
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int marks[5]={21,32,43,22,11};
//     int size =5;
//     int target=11;
    
//             for (int  i = 0; i < size; i++)
//         {
//             if (marks[i]==target  )
//             {
//                 cout<<i;
//             }
            
//         }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int marks[5]={21,32,43,22,11};
//     int size =5;
//     int sum=0;
//     int product=1;
   
    
//             for (int  i = 0; i < size; i++)
//         {
//            sum+=marks[i]; 
//            product*=marks[i];  
//         }
//         cout<<"The total  sum is:"<<sum<<endl;
//         cout<<"The total product is:"<<product;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//  int arr[]={1,2,3,4,5};
//  int max=INT_FAST8_MIN;
//  int min=INT8_MAX;
//  int size=sizeof(arr)/sizeof(int);
//  for (int i = 0; i < size; i++)
//  {
//     if (max<arr[i])
//     {
//         max=arr[i];
//     }
//     if (min>arr[i])
//     {
//         min=arr[i];
//     }
      
//  }
//   cout<<max<<endl;
//   cout<<min<<endl;

// int temp=max;
// max=min;
// min=temp;
// cout<<max<<endl;
// cout<<min<<endl;
// for (int i = 0; i < size; i++)
// {
//     cout<<arr[i];
// }
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() 
// {
//     int arr[] = {4, 8, 1, 9, 2, 6};
//     int size = sizeof(arr) / sizeof(int);

//     int maxIndex = 0;
//     int minIndex = 0;

//     // Find max and min index
//     for (int i = 1; i < size; i++) 
//     {
//         if (arr[i] > arr[maxIndex]) 
//         {
//             maxIndex = i;
//         }

//         if (arr[i] < arr[minIndex]) 
//         {
//             minIndex = i;
//         }
//     }

//     // Swap max and min
//     int temp = arr[maxIndex];
//     arr[maxIndex] = arr[minIndex];
//     arr[minIndex] = temp;

//     // Print array
//     cout << "Array after swapping max and min:\n";

//     for (int i = 0; i < size; i++) 
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() 
// {
//     int arr[] = {1, 2, 3, 2, 1, 4, 5, 4};
//     int size = sizeof(arr) / sizeof(int);

//     cout << "Unique numbers are: ";

//     for (int i = 0; i < size; i++) 
//     {
//         int count = 0;

//         for (int j = 0; j < size; j++) 
//         {
//             if (arr[i] == arr[j]) 
//             {
//                 count++;
//             }
//         }

//         // Print only unique number
//         if (count == 1) 
//         {
//             cout << arr[i] << " ";
//         }
//     }

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    int start=0;
    int end=size-1;
    for (int  i = 0; i < size; i++)
    {
        while (start<end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        
    }
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i];
    }
    
    
    return 0;
}

// let star t for first