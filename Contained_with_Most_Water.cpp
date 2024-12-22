#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(vector<int>&A){
    int i=0,j=A.size()-1;
    int ans=-1,temp=-1;
    while(i<=j){
        temp=min(A[i],A[j])*(j-i);

        ans=max(ans,temp);

        // if(A[i]<A[j])
        //     i++;
        // else
        //     j--;
        A[i]<A[j]?i++:j--;
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
    vector<int>A;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        A.push_back(temp);
    }

    cout<<fun(A)<<endl;
    

    return 0;
}