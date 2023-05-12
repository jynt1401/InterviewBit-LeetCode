#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> A = {-4, 3};
    vector<int> B = {-2, -2};
    int a = 0;
    int b = 0;
    vector<int> c;
    while (a < A.size() && b < B.size())
    {
        if (A[a] <= B[b])
        {
            c.push_back(A[a]);
            a++;
        }
        else
        {
            c.push_back(B[b]);
            b++;
        }
    }
    while (a < A.size())
    {
        c.push_back(A[a]);
        a++;
    }
    while (b < B.size())
    {
        c.push_back(B[b]);
        b++;
    }
    for (auto i : c)
    {
        cout << i << " ";
    }
    return 0;
}