#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(string A){
    int ans=0;
    int size=A.size();
    for (int i=0;i<size;i++)
        if(tolower(A[i])==97 || tolower(A[i])==101 || towlower(A[i])==105 || tolower(A[i])==111 || tolower(A[i])==117)
            ans=(ans+size-i);

    return (ans%10003);
}

int fun2(string A){
    int n=A.length();
    int answer=0;
    for(int i=0;i<n;i++){
        char ch=tolower(A[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            answer+=(n-i);  //n-i possible sequences
        }
    }
    return(answer%10003);
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin>>s;
    cout<<fun(s)<<endl;

    return 0;
}