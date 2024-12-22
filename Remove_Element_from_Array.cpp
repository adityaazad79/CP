#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(vector<int>&A,int B){
    int size=A.size();

    int ct=0;

    bool flag=0;
    for (int i = 0; i < size; i++)
    {
        flag=0;
        while(A[i]==B){
            flag=1;
            i++;
            ct++;
        }   
        if(flag)
            A[i-ct]=A[i];
    }
    for (int i = 0; i <ct; i++)
        A.pop_back();
    
    return ct;
}

int fun2(vector<int>&A,int B){
    int size=A.size();
    int i=0,j=0,ans=0;
    while(j<size){
        if(A[j]==B)
            j++;
        else{
            swap(A[i],A[j]);
            i++;
            j++;
            ans++;
        }
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
    vector<int>A;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        A.push_back(temp);
    }
    int B;
    cin>>B;

    cout<<fun2(A,B)<<endl;

    for(auto i:A)
        cout<<i<<" ";
    cout<<endl;
    

    return 0;
}