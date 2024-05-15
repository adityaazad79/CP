// https://www.interviewbit.com/problems/deserialize/

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

vector<string>fun(string A){
    int size=A.size();
    vector<string>S;
    string temp;
    bool flag=0;
    for (int i = 0; i < size; i++)
    {
        if(A[i]>96 && A[i]<123)
        {
            temp.push_back(A[i]);
            flag=1;
        }
        else if(flag)
        {
            S.push_back(temp);
            temp="";
            flag=0;
        }
    }

    return S;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string S;
    cin>>S;
    
    vector<string>A=fun(S);

    for (int i = 0; i < A.size(); i++)
        cout<<A[i]<<" ";
    cout<<endl;
    

    return 0;
}