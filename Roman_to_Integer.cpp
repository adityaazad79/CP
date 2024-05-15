#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(string A){
    int size=A.size();
    int ans=0;
    
    for (int i = 0; i < size; i++)
    {
        if(A[i]=='I'){
            ans+=1;
        }
        else if(A[i]=='V'){
            ans+=5;
            if(A[i-1]=='I')
                ans-=2;
        }
        else if(A[i]=='X'){
            ans+=10;
            if(A[i-1]=='I')
                ans-=2;
        }
        else if(A[i]=='L'){
            ans+=50;
            if(A[i-1]=='X')
                ans-=20;
        }
        else if(A[i]=='C'){
            ans+=100;
            if(A[i-1]=='X')
            ans-=20;
        }
        else if(A[i]=='D'){
            ans+=500;
            if(A[i-1]=='C')
                ans-=200;
        }
        else if(A[i]=='M'){
            ans+=1000;
            if(A[i-1]=='C')
                ans-=200;
        }
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string S;
    cin>>S;
    cout<<fun(S)<<endl;

    return 0;
}