#include<iostream>
#include<vector>
using namespace std;
int binary_mountain(vector<int>& ans){
int st=1,end=ans.size()-2;
while(st<=end){
int mid=st+(end-st)/2;
if(ans[mid-1]<ans[mid]&&ans[mid]>ans[mid+1]){
    return mid;
}
else if(ans[mid-1]<ans[mid]){
    st=mid+1;
}
else{
    end=mid-1;
}
}
return -1;
}
int main(){
vector<int> vact={1,2,3,8,7,5,1};
cout<<binary_mountain(vact);
return 0;
}