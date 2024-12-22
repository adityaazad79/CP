#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(vector<int>&A,int B){
    int size=A.size()-1,temp;
    for (int i=0;i<size;i++)
    {
        temp=abs(A[i]-A[i+1]);
        if(temp==0)
            continue;
        else if(temp==B)
            continue;
        else if(temp==(B+B))
            continue;
        else
            return 0;
    }
    return 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    int B;
    cin>>B;
    vector<int>A;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        A.push_back(temp);
    }
    cout<<fun(A,B)<<endl;

    return 0;
}