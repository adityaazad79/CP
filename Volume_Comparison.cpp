#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b,c,x;
    cin>>a>>b>>c>>x;

    if(a*b*c==x*x*x){
        cout<<"Equal"<<endl;
    }
    else if(a*b*c>x*x*x)
        cout<<"Cuboid"<<endl;
    else
        cout<<"Cube"<<endl;


    return 0;
}