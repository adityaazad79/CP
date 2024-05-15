#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(vector<int>&A){
    int num=A[0];
    int size=A.size();
    for (int i = 0; i < size; i++)
    {
        num=num^A[i];
        cout<<num<<" ";
        if(num==0 && i!=0)
            return A[i];
    }
}

int fun2(vector<int> A){
    int size=A.size();
    // unordered_set<int,int>u(size,1);
    vector<bool>u(size+1,1);
    for (int i = 0; i < size; i++)
    {
        if(u[A[i]])
            u[A[i]]=0;
        else
            return A[i];
    }
    return 1;   
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

    int x=fun2(A); 
    cout<<endl;   
    cout<<"Repeat : "<<x<<endl;
    

    return 0;
}