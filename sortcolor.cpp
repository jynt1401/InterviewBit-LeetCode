#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int>nums={0};
   int one=0,two=0,zero=0;
   for(int i=0;i<nums.size();i++){
    if(nums[i]==0){
        zero++;
    }
    if(nums[i]==1){
        one++;
    }
    if(nums[i]==2){
        two++;
    }
   }
//    cout<<zero<<" "<<one<<" "<<two<<endl;
//    for(auto i:nums){
//     cout<<i<<" ";
//    }
   cout<<endl;
   for(int i=0;i<zero;i++){
    nums[i]=0;
   }
   for(int i=zero;i<zero+one;i++){
    nums[i]=1;
   }
   for(int i=one+zero;i<nums.size();i++){
    nums[i]=2;
   }
   for(auto i:nums){
    cout<<i<<" ";
   }

  return 0;
}