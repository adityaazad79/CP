#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

vector<int>fun(vector<int>A,vector<int>B){
    int sizeA=A.size();
    int sizeB=B.size();

    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());

    vector<int>ans;
    bool flag=0;
    int temp;
    int rem=0,i;
    for (i = 0; i <sizeA && i<sizeB; i++)
    {
        flag=0;
        temp=A[i]+B[i]+rem;
        if(temp>9){
            ans.push_back(temp%10);
            rem=1;
            flag=1;
        }
        else{
            ans.push_back(temp);
            rem=0;
        }
    }
    while(i<sizeA){
        temp=A[i]+rem;
        flag=0;
        if(temp>9){
            ans.push_back(temp%10);
            rem=1;
            flag=1;
        }
        else{
            ans.push_back(temp);
            rem=0;
        }
        i++;
    }
    while(i<sizeB){
        temp=B[i]+rem;
        flag=0;
        if(temp>9){
            ans.push_back(temp%10);
            rem=1;
            flag=1;
        }
        else{
            ans.push_back(temp);
            rem=0;
        }
        i++;
    }
    if(flag)
        ans.push_back(rem);

    reverse(ans.begin(),ans.end());
    
    return ans;
}


vector<int>fun2(vector<int>A,vector<int>B){
    int sizeA=A.size();
    int sizeB=B.size();

    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());

    vector<int>ans;
    bool flag=0;
    int temp;
    // int rem=0,i;
    int i;
    for (i = 0; i <sizeA && i<sizeB; i++)
    {
        // flag=0;
        temp=A[i]+B[i]+flag;
        if(temp>9){
            ans.push_back(temp%10);
            // rem=1;
            flag=1;
        }
        else{
            ans.push_back(temp);
            // rem=0;
            flag=0;
        }
    }
    while(i<sizeA){
        temp=A[i]+flag;
        // flag=0;
        if(temp>9){
            ans.push_back(temp%10);
            // rem=1;
            flag=1;
        }
        else{
            ans.push_back(temp);
            // rem=0;
            flag=0;
        }
        i++;
    }
    while(i<sizeB){
        temp=B[i]+flag;
        // flag=0;
        if(temp>9){
            ans.push_back(temp%10);
            // rem=1;
            flag=1;
        }
        else{
            ans.push_back(temp);
            // rem=0;
            flag=0;
        }
        i++;
    }
    if(flag)
        ans.push_back(1);

    reverse(ans.begin(),ans.end());
    
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m, temp;
    vector<int>A;
    vector<int>B;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        A.push_back(temp);
    }
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>temp;
        B.push_back(temp);
    }

    // vector<int>sol=fun(A,B);
    vector<int>sol=fun2(A,B);
    for (int i = 0; i < sol.size(); i++)
    {
        cout<<sol[i]<<" ";
    }
    cout<<endl;

    return 0;
}