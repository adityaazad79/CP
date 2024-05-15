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
    int p=0,q=size-1;
    vector<int>sol(size);
    int x=size-1;
    for (int i = size-1; p<=q; i--)
    {
        if(abs(A[p])>abs(A[q])){
            sol[i]=A[p]*A[p];
            p++;
        }
        else{
            sol[i]=A[q]*A[q];
            q--;
        }
    }
    return sol;
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

A=fun(A);
        for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;

    return 0;
}