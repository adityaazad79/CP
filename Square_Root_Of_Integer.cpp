#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(int A){
    if(A==1 || A==0)
        return A;
    int i;
    while(i*i<=A)
        i++;
    return i-1;
}

int fun2(int A){
    if (A==1||A==0)
        return A;
 
    long long start=0,end=A,ans,mid,sq;
    while (start<=end) {
        mid=(start+end)/2;
        sq=mid*mid;
        if (sq<=A) {
            start=mid+1;
        }
        else
            end=mid-1;
    }
    return end;
}

int fun3(int A){
    if (A==1||A==0)
        return A;
 
    long long start=1,end=A/2,ans,sq,mid;
    while (start<=end) {
        mid=(start+end)/2;
 
        sq=mid*mid;
        if (sq==A)
            return mid;
 
        if (sq<=A) {
            start=mid+1;
            ans=mid;
        }
        else
            end=mid-1;
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
    cout<<fun3(n)<<endl;

    return 0;
}