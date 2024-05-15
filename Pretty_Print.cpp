#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

/*
00 01 02 03 04
10 11 12 13 14
20 21 22 23 24
30 31 32 33 34
40 41 42 43 44
*/

vector<vector<int>> fun(int A){
    int t=2*A-1;
    int v=t*t;
    int p=A;
    vector<vector<int>> V (t,vector<int>(t,0));

    int top=0, bottom=t-1, left=0,right=t-1;
    int tc=top,bc=bottom,lc=left,rc=right;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t;j++)
        {
            cout<<V[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    // for (int i = 0;v; i++)
    // p=0;
    while(v)
    {
        lc=left;
        while(lc<=right && v){
            V[top][lc]=p;
            lc++;
            v--;
        }
        lc=left;
        tc=top;
        tc++;
        while(tc<=bottom && v){
            V[tc][right]=p;
            tc++;
            v--;
        }
        tc=top;
        rc=right;
        rc--;
        while(rc>lc && v){
            V[bottom][rc]=p;
            rc--;
            v--;
        }
        rc=right;
        bc=bottom;
        // bc--;
        while (bc>tc && v)
        {
            V[bc][lc]=p;
            bc--;
            v--;
        }
        bc=bottom;

        top++;
        bottom--;
        left++;
        right--;
        p--;
    }
    cout<<endl;
    cout<<"t*t :"<<t*t<<endl;
    cout<<endl;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t;j++)
        {
            cout<<V[i][j]<<" ";
        }
        cout<<endl;
        
    }

    return V;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    vector<vector<int>>V=fun(n);

    return 0;
}