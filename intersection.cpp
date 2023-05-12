#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int>A={1,2,3,3,4,5,6};      
   vector<int>B={3,3,5};      
   vector<int>c;
   int a=0;
   int b=0;
   while(a<A.size() && b<B.size()){
    if(A[a]==B[b]){
        c.push_back(A[a]);
        a++;
        b++;
    }
    else if(A[a]>B[b]){
        b++;
    }
    else if(A[a]<B[b]){
        a++;
    }
   }  
   for(auto i:c){
    cout<<c;
   }    
  return 0;
}