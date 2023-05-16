#include<bits/stdc++.h>
using namespace std;
int main(){
   int n; 
   cin>>n;
   for(int i=0;i<n;i++){
         int t;
         cin>>t;
         int arr[t];
         for(int j=0;j<t;j++){
            cin>>arr[j];
         }
         vector<int>a;
         for(int j=1;j<t;j++){
            if(arr[j]>arr[j-1]){
               a.push_back(1);
            }
            // else if(arr[j]==arr[j-1]){
            //    // a.push_back(0);
            // }
            else if(arr[j]<arr[j-1]){
               a.push_back(-1);
            }
         }
         // for(int j=0;j<t;j++){
         //    cout<<arr[j]<<" ";
         // }
         // cout<<endl;
         // for(auto j:a){
         //    cout<<j<<" ";
         // }
         int cnt=2;
         if(a.size()==0){
            cout<<1<<endl;
         }
         else{

         for(int j=1;j<a.size();j++){
            if(a[j]!=a[j-1]){
               cnt++;
            }
         }
         cout<<cnt<<endl;
         }

         

    }       
  return 0;
}