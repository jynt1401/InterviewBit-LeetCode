#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;
    int i = 0;
    int j = 0;
    int ans=0;
    unordered_map<int,int>m;
    m[0]=0;
    while(j<nums.size()){
        
        // cout<<ans<<endl;
        if(nums[j]==0){
            m[0]++;
        }
        if(m[0]<k){
            j++;
            ans=max(ans,j-i+1);
        }
        else if(m[0]==k){
         ans=max(ans,j-i+1);
         
         j++;
           
        }
        else if(m[0]>k){
            while(m[0]>k){
                if(nums[i]==0){
                    m[0]--;
                }
                i++;
            }
            j++;
        }

    }
    
    cout<<ans;
    return 0;
}