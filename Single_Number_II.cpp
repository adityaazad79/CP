#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(vector<int>&A){
    int size=A.size();
    if(size==1)
        return A[0];

    unordered_map<int,int>ump;
    for (int i = 0;i<size; i++)
    {
        ump[A[i]]++;
    }
    for(auto &i:ump)
        if(i.second==1)
            return i.first;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    vector<int>A;
    int temp;
    while (n--)
    {
        cin>>temp;
        A.push_back(temp);
    }

    cout<<fun(A)<<endl;
    

    return 0;
}