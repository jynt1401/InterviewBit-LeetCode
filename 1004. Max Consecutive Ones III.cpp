#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> A = {0,1,1,1};
    int B = 0;
    int i = 0;
    int j = 0;
    int ans=0;
    vector<pair<int,pair<int,int>>>a;
    unordered_map<int,int>m;
    m[0]=0;
    while(j<A.size()){
        
        if(A[j]==0){
            m[0]++;
        }
        if(m[0]<B){
         ans=max(ans,j-i+1);
         a.push_back({j-i+1,{i,j}});
            j++;
        }
        else if(m[0]==B){
         ans=max(ans,j-i+1);
           a.push_back({j-i+1,{i,j}});

         j++;
           
        }
        else if(m[0]>B){
            while(m[0]>B){
                if(A[i]==0){
                    m[0]--;
                }
                i++;
            }
            j++;
        }

    }

    sort(a.begin(),a.end());
    int low;
    int high;
    int max;
    for(auto i:a){
        max=i.first;

        // cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<endl;
    }
    for(auto i:a){
        if(max==i.first){

        low=i.second.first;
        high=i.second.second;
        // cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<endl;
        break;
        }

    }
    
    // cout<<low<<" "<<high<<endl;
    vector<int> aans;
    for(int i=low;i<=high;i++){
        aans.push_back(i);
    }
   
    for(auto i:aans){
        cout<<i<<" ";
    }
   


    
    
    return 0;
}