#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(vector<int>&A){
    int num1=INT_MIN; 
    int num2=INT_MAX;
    int num3=INT_MIN;
    int num4=INT_MAX;
    int size=A.size();
    for (int i = 0; i < size; i++)
    {
        num1=max(A[i]+i,num1);
        num2=min(A[i]-i,num2);
        num3=max(A[i]-i,num3);
        num4=min(A[i]+i,num4);
    }
    return max(num1-num4,num3-num2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    vector<int>V;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        V.push_back(temp);
    }

    cout<<"Val : "<<fun(V)<<endl;
    

    return 0;
}