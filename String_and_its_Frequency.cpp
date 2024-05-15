#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

string fun(string A){
    int size=A.size();
    // unordered_map<char,int>ans;
    // for (int i = 0; i < size; i++)
    // {
    //     ans[A[i]]++;
    // }
    string S;
    // for (int i = 0; i < size; i++)
    // {
    //     if(ans[A[i]]){
    //         S.push_back(A[i]);
    //         S.append(to_string(ans[A[i]]));
    //         ans[A[i]]=0;
    //     }
    // }

    int f[26];
    for (int i = 0; i < 26; i++)
        f[i]=0;
    
    for (int i = 0; i < size; i++)
        f[int(A[i]-'a')]++;

    for (int i = 0; i < size; i++)
    {
        if(f[int(A[i]-'a')]>0){
            S.push_back(A[i]);
            S.append(to_string(f[int(A[i]-'a')]));
            f[int(A[i]-'a')]=0;
        }
    }
    
    return S;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string A;
    cin>>A;
    cout<<fun(A)<<endl;

    return 0;
}