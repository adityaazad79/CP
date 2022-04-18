#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_map<string, string> s;
    int n, m;
    cin >> n >> m;
    while (n--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        s.insert({str2, str1});
    }
    while (m--)
    {

        string str1, str2;
        cin >> str1 >> str2;
        int size = str2.size();
        string str3 = str2.substr(0, size - 1);
        if (s.find(str3) != s.end())
        {
            auto it = s.find(str3);
            cout << str1 << " " << str2 << " #" + (*it).second << endl;
        }
    }

    return 0;
}