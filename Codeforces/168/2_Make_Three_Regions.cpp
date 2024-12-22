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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s1,s2;
        
        cin>>s1>>s2;

        int ct = 0;
        n--;
        for (int i = 1; i < n; i++)
        {
            if (s1[i] == '.' && s1[i - 1] == '.' && s1[i + 1] == '.' && s2[i]=='.' && s2[i-1]=='x' && s2[i+1]=='x'){
                ct++;
            }
        }
        for (int i = 1; i < n; i++)
        {
            if (s2[i] == '.' && s2[i - 1] == '.' && s2[i + 1] == '.' && s1[i]=='.' && s1[i-1]=='x' && s1[i+1]=='x'){
                ct++;
            }
        }
        cout<<ct<<endl;
    }

    return 0;
}