#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

vector<int> fun(string A){
    int len=A.length();
    int count=0,max=-1,l=1,r=1,flag=1;
    int rf=r,lf=l,flag2=1;
    for (int i = 0; i < len; i++)
    {
        if(A[i]=='0')
            flag2=0;
        if(A[i]=='0'){
            count++;
            if(flag){
                l=i;
            }
            r=i;
            flag=0;
        }
        else{
            if(max<count){
                max=count;
                lf=l+1;
                rf=r+1;
                flag=1;
            }
            count=0;
        }
    }
    if(flag2)
        return {};
    if(max<count)
        return {l+1,r+1};
    return {lf,rf};
}

vector<int>fun2(string A){
    int size=A.size();
    vector<int>ar(size);
    for (int i = 0; i < size; i++)
    {
        if(A[i]=='1'){
            ar[i]=-1;
        }
        else{
            ar[i]=1;
        }
    }
    int m=0;
    int max,MAX;
    max=MAX=0;
    pair<int,int>sol=make_pair(INT_MAX,INT_MAX);
    int flag=1;
    for (int i = 0; i < size; i++)
    {
        if(max+ar[i]<0){
            m=i+1;
            max=0;
        }
        else
            max+=ar[i];
        if(MAX<max){
            MAX=max;
            sol.first=m;
            sol.second=i;
            flag=0;
        }
    }
    if(flag)
        return {};
    
    return {sol.first+1,sol.second+1};
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string A;
    cin>>A;
    vector<int>ar;
    ar=fun(A);
    if(ar.size())
        cout<<ar[0]<<" "<<ar[1]<<endl;
    else
        cout<<"Empty"<<endl;
    return 0;
}