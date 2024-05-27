#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(vector<int>A){
    int size=A.size();
    int ans=0;
    vector<int>V(size,1);
    for (int i=1;i<size;i++)
        if(A[i]>A[i-1])
            V[i]=V[i-1]+1;

    for (int i = size-2; i>=0;i--)
        if(A[i]>A[i+1])
            V[i]=max(V[i+1]+1,V[i]);
    
    for (int i = 0; i < size; i++)
        ans+=V[i];
    
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int temp;
    vector<int>A;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        A.push_back(temp);
    }
    
    cout<<fun(A)<<endl;

    return 0;
}