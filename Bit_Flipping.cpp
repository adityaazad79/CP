#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(int A){
    // int n=ceil(log2(A));
    // int mask=0;
    // // cout<<"n : "<<n<<endl;
    // while(n--){
    //     mask<<=1;
    //     mask=mask|1;
    //     // mask=mask&0;
    // }
    // // cout<<"mask : "<<mask<<endl;
    // return(A^mask);

    // // return n;

    int mask = -1;
    while(mask&A)
        mask=mask<<1;
    return ~A^mask;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    
    cout<<fun(n)<<endl;
    

    return 0;
}