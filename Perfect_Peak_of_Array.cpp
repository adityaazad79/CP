#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(vector<int>A){
    int size=A.size();
    vector<int>lmax(size);
    vector<int>rmin(size);
    lmax[0]=A[0];
    rmin[size-1]=A[size-1];
    int i;
    for (int i =1;i<size;i++)
        lmax[i]=max(A[i],lmax[i-1]);

    for(i=size-2;i>=0;i--)
        rmin[i]=min(A[i],rmin[i+1]);  

    size--;
    for (i =1;i<size; i++)
        if(A[i]>lmax[i] && A[i]<rmin[i])
            return 1;

    return 0;
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