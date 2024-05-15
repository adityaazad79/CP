#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

vector<int> fun(vector<int>A){
    int ct=0;
    int j=0;
    for(auto it:A)
        if(it==0)
            ct++;
        else
            A[j++]=it;

    // int size=A.size();
    // for (int i = 0; i < size; i++)
        // if(A[i]!=0)
            // A[j++]=A[i];
    // for(auto it:A)
        // if(it)

    while(ct--)
        A[j++]=0;

    return A;
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

    A=fun(A);
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    
    

    return 0;
}