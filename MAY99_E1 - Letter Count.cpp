#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;


char fun(string A){
    int size=A.size();
    unordered_map<char,int>ump;
    for (int i = 0; i < size; i++)
        ump[A[i]]++;

    int max=-1;
    char x='z';
    for(auto &it:ump){
        if(it.second>max){
            max=it.second;
                x=it.first;
        }
        else if(it.second==max && x>it.first)
            x=it.first;
    }
    
    return x;
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