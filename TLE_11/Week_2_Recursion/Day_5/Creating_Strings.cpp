#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void fun(vector<ll> &f, ll n, vector<string> &ans, string temp)
{
    if (temp.size() >= n)
    {
        ans.push_back(temp);
        return;
    }
    for (int i = 0; i < 26; i++)
    {
        if (f[i] > 0)
        {
            f[i]--;
            // temp.push_back(i+'a');
            fun(f, n, ans, temp + char('a' + i));
            // fun(s, f, n, ans, temp, curr_elem + 1);
            f[i]++;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    // sort(s.begin(), s.end());
    ll n = s.size();

    vector<ll> f(26, 0);

    for (int i = 0; i < n; i++)
    {
        f[s[i] - 'a']++;
    }

    // ll ct=0;

    // for(auto it:m)
    // cout<<it<<" ";
    vector<string> ans;

    string temp = "";

    fun(f, n, ans, temp);

    cout<<ans.size()<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    // cout<<ct<<endl;

    // for (int i = 0; i < ct; i++)
    // {
    //     cout<<V[i]<<endl;
    // }
    // for (auto it : V)
    //     cout << it << endl;

    return 0;
}