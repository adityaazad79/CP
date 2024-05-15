#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(vector<int>A){
    // Have got help from youtube
    int size=A.size();
    vector<int>sum(size);
    for (int i=size-1;i>=0;i--)
    {
        // Maintaining alternating sum
        sum[i]=A[i];
        if(i+2<size)
            sum[i]+=sum[i+2];
    }
    int ct=0;
    int odd=0, even=0,odds,evens;
    for (int i = 0; i < size; i++)
    {
        odds=0,evens=0;
        if(i%2){
            if(i+1<size)
                odds+=sum[i+1];
            if(i+2<size)
                evens+=sum[i+2];
        }
        else{
            if(i+1<size)
                evens+=sum[i+1];
            if(i+2<size)
                odds+=sum[i+2];
        }
        if(odds+odd==evens+even)
            ct++;
        if(i%2)
            odd+=A[i];
        else
            even+=A[i];
    }
    return ct;
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

    int x=fun(A);
    cout<<x<<endl;

    return 0;
}