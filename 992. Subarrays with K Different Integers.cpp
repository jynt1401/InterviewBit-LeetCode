#include <bits/stdc++.h>
using namespace std;

int f(vector<int>A,int B){
    if(B==0){
        return 0;
    }
    int i=0;
    int j=0;
    int ans=0;
    unordered_map<int,int>m;
    while(j<A.size()){
        m[A[j]]++;
        if(m.size()<=B){
        ans=ans+abs(j-i+1);
        // cout<<ans<<endl;
            j++;
        }
        else if(m.size()>B){
            while(m.size()>B){

            m[A[i]]--;
            if(m[A[i]]==0){
                m.erase(A[i]);
            }
            i++;
            }m[A[j]]--;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {1,2};
    int k = 1;
    int x=f(nums,k);
    cout<<"ans->"<<x<<endl;
    cout<<f(nums,k-1)<<endl;
    cout<<(f(nums,k)-f(nums,k-1));
    return (f(nums,k)-f(nums,k-1));

    return 0;
}