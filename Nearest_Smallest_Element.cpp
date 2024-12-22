#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

vector<int>fun(vector<int>A){
    int size=A.size();
    stack<int>S;
    vector<int>ans(size);

    for (int i = size-1; i>=0;i--)
    {
        while(!S.empty()&&A[i]<A[S.top()]){
            ans[S.top()]=i;
            S.pop();
        }
        S.push(i);
    }
    while(!S.empty()){
        ans[S.top()]=-1;
        S.pop();
    }
    for (int i = 0; i < size; i++)
    {
        if(ans[i]!=-1)
            ans[i]=A[ans[i]];
    }
    
    

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    int temp;
    vector<int>A;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        A.push_back(temp);
    }

    vector<int>ans=fun(A);
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
    

    return 0;
}