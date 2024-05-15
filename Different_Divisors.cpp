// https://codeforces.com/contest/1474/problem/B

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

// Brute Force Normal
int fun1(int d)
{
    int ct = 0, a;
    int i, j;
    int flag = 0;
    for (i = 6; i; i++)
    {
        ct = 0;
        for (j = 1; j; j++)
        {
            if (i % j == 0)
            {
                ct++;
                if (j != 1 && j - a < d)
                    break;
                if (ct == 3 && a * j == d)
                    break;
                a = j;
            }
            if ((ct == 4))
            {
                flag = 1;
                break;
            }
            if (j >= i)
                break;
        }
        if (flag)
            break;
    }
    return i;
}

int fun2(int d){
    ll i,j,ct;
    ll a,b;
    for (i = d+1; ; i++)
    {
        ct=0;
        for(j=2;j*j<=i;j++){
            if(i%j==0)
                ct++;
        }
        if(ct==0){
            a=i;
            break;
        }
    }
    for(i=a+d;;i++){
        ct=0;
        for(j=2;j*j<=i;j++){
            if(i%j==0)
                ct++;
        }
        if(ct==0){
            b=i;
            break;
        }
    }
    // return min(a*b,a*a*b);
    return a*b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    int d;
    int ct = 0;
    int a;
    while (t--)
    {
        ct = 0;
        cin >> d;
        // cout<<fun1(d)<<endl;
        cout<<fun2(d)<<endl;
    }

    return 0;
}

// 6 - 1,2,3,6
// 15 - 1,3,5,15
// 48 - 1,2,3,4,6,8,12,16,24,48