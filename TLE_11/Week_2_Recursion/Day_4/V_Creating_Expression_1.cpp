#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void fun(ll *arr, ll n, ll x, bool &r, ll curr_sum, ll curr_elem)
{
    if (curr_elem == n)
    {
        if (curr_sum==x){
            r=1;
        }
        return;
    }
    
    if(r)
        return;
    else
        fun(arr, n, x, r, curr_sum+arr[curr_elem], curr_elem+1);

    if(r)
        return;
    else
        fun(arr, n, x, r, curr_sum-arr[curr_elem], curr_elem+1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, x;
    cin >> n >> x;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool r=0;
    // fun(arr, n, x, r, 0, 0);
    fun(arr, n, x, r, arr[0], 1);
    if (r)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}