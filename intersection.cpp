#include <bits/stdc++.h>
using namespace std;

int f(vector<int> A)
{

    

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

        ss.push({A[i], i});
    }

    int area = 0;
    for (int i = 0; i < A.size(); i++)
    {
        // cout << A[i] * (RS[i] - LS[i] - 1) << endl;
        area = max(area, A[i] * (RS[i] - LS[i] - 1));
    }
    return area;
}

int main()
{

    vector<int> A = {0,1,0,2,1,0,1,3,2,1,2,1};

     vector<int> RS;

    stack<pair<int, int>> s;
    for (int i = A.size() - 1; i >= 0; i--)
    {
        if(s.size()==0){
            RS.push_back(-1);
             s.push({A[i], i});
        }
        else if(s.size()>0 && s.top().first>A[i])
        {
             RS.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first<=A[i])
        {
             while(s.size()>0 && s.top().first<=A[i]){
                s.pop();
             }
             if(s.size()==0){
                RS.push_back(-1);
             }
             else{
                 RS.push_back(s.top().second);
             }



              s.push({A[i], i});

        }
    }
    reverse(RS.begin(), RS.end());

     vector<int> LS;

    stack<pair<int, int>> ss;
    for (int i = 0; i < A.size(); i++)
    {
       
        if(ss.size()==0){
            LS.push_back(-1);
             ss.push({A[i], i});
        }
        else if(ss.size()>0 && ss.top().first>A[i])
        {
             LS.push_back(ss.top().second);
        }
        else if(ss.size()>0 && ss.top().first<=A[i])
        {
             while(ss.size()>0 && ss.top().first<=A[i]){
                ss.pop();
             }
             if(ss.size()==0){
                LS.push_back(-1);
             }
             else{
                 LS.push_back(ss.top().second);
             }



              ss.push({A[i], i});

        }


       
    }
     
    

    int area=0;
    for(int i=0;i<A.size();i++){
        if(LS[i]!=-1 && RS[i]!=-1){
            area+=min(A[LS[i]],A[RS[i]])-A[i];
            // cout<<"for "<<i<<"area "<<area<<endl;
        }
        else{
            // cout<<"not for "<<i<<endl;
        }
    }
    cout<<"ans "<<area;
    

    return 0;
}