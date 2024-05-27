#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(int A){
    return (A%9?A%9:9);
}

int main()
{
    int n;
    cin>>n;
    cout<<fun(n)<<endl;

    return 0;
}