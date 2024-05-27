#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
const int M = 1e9 + 7;

long fun(string A){
    int size=A.size();
    long int ans=0,t=0;
    for(int i=0;i<size;i++)
        if(A[i]=='>')
            t++;
        else if(A[i]=='<')
            ans+=t;
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string A;
    cin>>A;
    cout<<fun(A)<<endl;

    return 0;
}