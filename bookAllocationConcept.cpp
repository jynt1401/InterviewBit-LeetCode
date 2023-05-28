#include <bits/stdc++.h>
using namespace std;

bool istrue(vector<int> A,int B,int mid){
    int n=A.size();
    int k=1;
    int sum=0;
    for(auto i:A){
        sum+=i;
        if(sum>mid){
            k++;
            sum=i;

        }

    }
    if(k>B){
    // cout<<"false for"<<mid<<endl;
        return false;
    }
    // cout<<"true for"<<mid<<endl;
    return true;

}

int main()
{

    vector<int> A= {31, 14, 19, 75 };
    int B = 12;
    int max_cap=0;
    int total_cap=0;
    for(auto i:A){
        total_cap+=i;
        max_cap=max(max_cap,i);
    }
    int res=-1;

    int low=max_cap;
    int high=total_cap;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(istrue(A,B,mid)==true){
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