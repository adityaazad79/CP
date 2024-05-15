#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

string fun1(string A, int B){
    // A="PAYPALISHIRING";
    // B=4;
    int size=A.size();
    int ct=0,skip;
    string ans="";
    int ind=0,start_i=0,mul_ct=0;

    int iter=1;
    int i_skip=2*B-2;
    bool f=1;
    int g=B;
    while(ct<size){
        // if(f)
        //     skip=2*B-2;
        // else
        //     skip=2*abs(g-B)-2;
        B--;
        ind=start_i;
        mul_ct=0;
        while(ind<size && ct<size){
                    if(f)
            skip=2*B-2;
        else
            skip=2*abs(g-B)-2;
            // ans.push_back(A[ind]);
            // cout<<endl;
            // cout<<"iter  : "<<iter<<endl;
            // cout<<"skip  : "<<skip<<endl;
            // cout<<"mul_ct  : "<<mul_ct<<endl;
            // cout<<"skip*mul_ct  : "<<skip*mul_ct<<endl;
            // cout<<ind << " "<<ct << " "<<size<<endl;
            f=~f;
            cout<<ind<<" ";
            // cout<<endl;
            mul_ct++;
            if(skip==0)
                skip=i_skip;
            ind=start_i+(skip*mul_ct);
            ct++;
        }
            iter++;
        start_i++;
        // ct++;
    }
    // cout<<endl;
    // cout<<ct<<" : ct"<<endl;
    return ans;
}

string fun2(string A, int B){
    // B--;
    int size=A.size();
    vector<string>S(B);
    int ct=0;
    int i=0;
    bool flag=0;
    while(ct<size)
    {
        for (; i < B; i++)
        {
            // cout<<"i : "<<i<<endl;
            S[i].push_back(A[ct]);
            ct++;
            if(ct==size){
                flag=1;
                break;
            }
        }
        if(flag)
            break;
        i=B-2;
        for (;i>0; i--)
        {
            // cout<<"j : "<<i<<endl;
            S[i].push_back(A[ct]);
            ct++;
            if(ct==size)
                break;
        }
        i=0;
    }
    string ans;
    
    for(auto it:S)
        // cout<<it<<" ";
        ans.append(it);

    // cout<<endl;
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string A;
    int B;
    cin>>A;
    cin>>B;
    cout<<fun2(A,B)<<endl;

    return 0;
}