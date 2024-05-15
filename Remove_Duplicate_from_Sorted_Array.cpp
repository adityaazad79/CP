#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(vector<int>A){
    int size=A.size();
    int i=0,j=1;
    while(j<size){
        if(A[i]==A[j])
            j++;
        else{
            swap(A[i+1], A[j]);
            i++;
            j++;
        }
    }

    for(auto it:A){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<endl;

    return i+1;
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
    
    cout<<fun(A)<<endl;

    return 0;
}