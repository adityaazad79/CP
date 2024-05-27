#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(int A,int B,int C){
    int x=A%B;

    return(C+A-1)%B;
}

int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    cout<<fun(A,B,C)<<endl;

    return 0;
}