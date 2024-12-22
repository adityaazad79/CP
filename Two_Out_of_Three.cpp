#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

vector<int> fun(vector<int>&A,vector<int>&B,vector<int>&C){
    int A_size=A.size();
    int B_size=B.size();
    int C_size=C.size();
    vector<int>ans;
    unordered_map<int,bool>uA;
    unordered_map<int,bool>uB;
    unordered_map<int,bool>uC;
    for (int i = 0; i < A_size; i++)
    {
        uA[A[i]]=1;
    }
    for (int i = 0; i < B_size; i++)
    {
        uB[B[i]]=1;
    }
    for (int i = 0; i < C_size; i++)
    {
        uC[C[i]]=1;
    }
    int temp=0;
    for (int i=0;(i<A_size&&i<B_size)||(i<B_size&&i<C_size) || (i<C_size && i<B_size); i++)
    {
        if(uA[A[i]] && uB[A[i]]){
            ans.push_back(A[i]);
            uA[A[i]]=0;
            uB[A[i]]=0;
        }
        else if(uA[A[i]] && uC[A[i]]){
            ans.push_back(A[i]);
            uA[A[i]]=0;
            uC[A[i]]=0;
        }
        // if(uA[B[i]] && uB[B[i]]){
        //     ans.push_back(B[i]);
        //     uA[B[i]]=0;
        //     uB[B[i]]=0;
        // }
        // else if(uB[B[i]] && uC[B[i]]){
        //     ans.push_back(B[i]);
        //     uB[B[i]]=0;
        //     uC[B[i]]=0;
        // }
    }

    for (int i=0;(i<A_size&&i<B_size)||(i<B_size&&i<C_size) || (i<C_size && i<B_size); i++)
    {
        if(uA[B[i]] && uB[B[i]]){
            ans.push_back(B[i]);
            uA[B[i]]=0;
            uB[B[i]]=0;
        }
        else if(uB[B[i]] && uC[B[i]]){
            ans.push_back(B[i]);
            uB[B[i]]=0;
            uC[B[i]]=0;
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int p,q,r;
    vector<int>A;
    vector<int>B;
    vector<int>C;
    int temp;
    cin>>p>>q>>r;
    for (int i = 0; i < p; i++)
    {
        cin>>temp;
        A.push_back(temp);
    }
    for (int i = 0; i < q; i++)
    {
        cin>>temp;
        B.push_back(temp);
    }
    for (int i = 0; i < r; i++)
    {
        cin>>temp;
        C.push_back(temp);
    }

    vector<int>ans=fun(A,B,C);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}