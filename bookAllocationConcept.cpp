#include <bits/stdc++.h>
using namespace std;

bool istrue(vector<int> weights,int days,int mid){
    int n=weights.size();
    int k=1;
    int sum=0;
    for(auto i:weights){
        sum+=i;
        if(sum>mid){
            k++;
            sum=i;

        }

    }
    if(k>days){
    cout<<"false for"<<mid<<endl;
        return false;
    }
    cout<<"true for"<<mid<<endl;
    return true;

}

int main()
{

    vector<int> weights= {1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    int max_cap=0;
    int total_cap=0;
    for(auto i:weights){
        total_cap+=i;
        max_cap=max(max_cap,i);
    }
    int res=-1;

    int low=max_cap;
    int high=total_cap;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(istrue(weights,days,mid)==true){
            high=mid-1;
            res=mid;
            cout<<res<<endl;
        }
        else{
            low=mid+1;
        }
    }
    cout<<res;
    return res;
}