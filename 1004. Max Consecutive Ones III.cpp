#include <bits/stdc++.h>
using namespace std;


int main()
{

    vector<int> A = {6,2,5,4,5,1,6};
    for (auto i : A)
    {
        cout << i << " ";
    }
    cout << endl;

    //--------right side small--------//
     vector<int> RS;

    stack<pair<int, int>> s;
    for (int i = A.size() - 1; i >= 0; i--)
    {
        int cnt = 1;

        
       
        while (s.size() > 0 && s.top().first >= A[i])
            {
                s.pop();
            }
            if (s.size() == 0)
            {
                RS.push_back(A.size());
            }
            else
            {
                RS.push_back(s.top().second);
            }
        
        s.push({A[i], i});
    }
    reverse(RS.begin(), RS.end());
    

    cout << endl;
    //--------left side small--------//
    vector<int> LS;

    stack<pair<int, int>> ss;
    for (int i = 0; i < A.size(); i++)
    {
        while (ss.size() > 0 && ss.top().first >= A[i])
            {
                ss.pop();
            }
            if (ss.size() == 0)
            {
                LS.push_back(-1);
            }
            else
            {
                LS.push_back(ss.top().second);
            }
        
        ss.push({A[i],i});
    }
   
    

    int area=0;
    for(int i=0;i<A.size();i++){
        cout<<A[i]*(RS[i]-LS[i]-1)<<endl;
        area=max(area,A[i]*(RS[i]-LS[i]-1));
    }

    


    return 0;
}