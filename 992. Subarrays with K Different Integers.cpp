#include <bits/stdc++.h>
using namespace std;

int solve(int a)
{
    int x = floor(log2(a)) + 1;
   
    int b = pow(2, x )-1;
    
    return a^b;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int l,r;
        cin>>l>>r;
       
        map<int,int>m;
        int x=0;
        for(int i=l;i<=r;i++){
            int aa=solve(i);
            if(aa>=l || aa<=r ){
                m[aa+i]++;
            }
        }
       
        cout<<m.size()<<endl;
    }
    
    return 0;
}