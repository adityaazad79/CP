#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(string A, string B) {
    string a=B.substr(B.size()-2);
    int b=stoi(a);
    int x=A[A.size()-1]-'0';
    long ans=(long)pow(x,(b%4+4));
   
    return (int)ans%10;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    

    return 0;
}