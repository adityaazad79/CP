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
        string s;
        cin >> s;
        bool flag = 1;
        if (s.size() == 1)
        {
            if (s[0] == 'a' || s[0] == 'z')
            {
                cout << s << 'b' << endl;
            }
            else
                cout << s << 'a' << endl;
            continue;
        }
        else
        {
            char temp = s[0];
            for (int i = 1; i < s.size(); i++)
            {
                if (s[i] == temp)
                {
                    cout << s.substr(0, i);
                    if (s[i] == 'a' || s[i] == 'z')
                    {
                        cout << 'b' << s.substr(i, s.size()) << endl;
                    }
                    else
                        cout << 'a' << s.substr(i, s.size()) << endl;
                    flag = 0;
                    break;
                }
                temp=s[i];
            }
        }
        if (flag)
        {
            if (s[s.size() - 1] == 'a' || s[s.size() - 1] == 'z')
            {
                cout << s << 'b' << endl;
            }
            else
                cout << s << 'a' << endl;
        }
    }

    return 0;
}