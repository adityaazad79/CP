// Hacker-Rank

#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;

long long int arr[N];

int main()
{
    int n,m;
    cin>>n>>m;
    n++;
    arr[0]=0;
    int a,b,k,i;
    while(m--){
        cin>>a>>b>>k;
        arr[a]+=k;
        arr[b+1]-=k;        
    }
    long long int max=-1;
    arr[0]=0;
    for ( i = 1; i < n; i++)
        arr[i]=arr[i-1]+arr[i];
    for(i=1;i<n;i++)
        if(max<arr[i])
            max=arr[i];
    cout<<max<<endl;
    
    return 0;
}