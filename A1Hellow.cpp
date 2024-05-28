#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
const int M = 1e9 + 7;

int main()
{
    int a,b;
    cin>>a>>b;
    a*=5;  

    // cout<<"a = "<<a<<" b = "<<b<<" "<<ceil(17/15)<<endl;
    cout<<ceil(double(b)/double(a))<<endl;

    return 0;
}