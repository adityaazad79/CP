#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

// vector<int> fun(vector<int>&A,vector<int>&B){
void fun(vector<int>&A,vector<int>&B){
    int s1=A.size();
    int s2=B.size();

    vector<int>ans;
    int a=0,b=0,i=0;
    for (i = 0; a < s1 && b<s2; i++)
    {
        if(A[a]<B[b]){
            ans.push_back(A[a]);
            a++;
        }
        else{
            ans.push_back(B[b]);
            b++;
        }
    }
    while(a<s1){
        ans.push_back(A[a]);
        a++;
    }
    while(b<s2){
        ans.push_back(B[b]);
        b++;
    }
    A=ans;
    // return ans;
}


void fun2(vector<int>&A,vector<int>&B){
    int s1=A.size();
    int s2=B.size();

    A.resize(s1+s2);
    int a=s1-1,b=s2-1,i=s1+s2-1;
    while(a>-1 && b>-1)
    {
        if(A[a]>B[b]){
            A[i--]=A[a--];
        }
        else{
            A[i--]=B[b--];
        }
    }
    while(b>-1)
        A[i--]=B[b--];
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
    int m;
    cin>>m;
    vector<int>B;
    for (int i = 0; i < m; i++)
    {
        cin>>temp;
        B.push_back(temp);
    }

    // vector<int>ans=fun(A,B);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;

    // fun(A,B);
    fun2(A,B);
    for (int i = 0; i < A.size(); i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    
    
    

    return 0;
}