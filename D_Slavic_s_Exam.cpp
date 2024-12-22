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
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        int ct = 0;
        map<char, int> ump1;
        map<char, int> ump2;
        map<char, int> ump3;
        vector<char> V;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '?')
            {
                ct++;
            }
            else
                ump1[s[i]]++;
        }
        int ct2 = 0, ct3 = 0;
        for (int i = 0; i < t.size(); i++)
        {
            ump2[t[i]]++;
            if (ump1[t[i]] == 0)
            {
                ct2++;
                ump3[t[i]]++;
                if (ump3[t[i]] == 1)
                    V.push_back(t[i]);
            }
            // if(ump2[t[i]]==1)
            //     ct3++;
        }
        cout<<"? "<<ct<<" "<<ump3.size()<<endl;
        if (ct < ump3.size())
        {
            cout << "NO" << endl;
            continue;
        }
        int j = 0;
        cout << "YES" << endl;
        // for (int i = 0; i < s.size(); i++)
        // {
        //     if (s[i] != '?')
        //     {
        //         cout << s[i];
        //     }
        //     else
        //     {
        //         cout << V[j % V.size()];
        //         // cout << ump3[(j % ump3.size())];
        //         j++;
        //     }
        // }
        cout << endl;

        // cout<<ct<<endl;
        // cout<<t.size()<<endl;
        // int j = 0;
        // if (ct >= t.size())
        // {
        //     cout << "YES" << endl;
        //     for (int i = 0; i < s.size(); i++)
        //     {
        //         if (s[i] != '?')
        //             cout << s[i];
        //         else
        //         {
        //             cout << t[j % t.size()];
        //             j++;
        //         }
        //     }
        //     cout << endl;
        // }
        // else
        //     cout << "NO" << endl;
    }

    return 0;
}