#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

bool isPal(string &s, int l, int r)
{
    while (l < r)
    {
        if (s[l] != s[r])
            return 0;
        l++;
        r--;
    }
    return 1;
}

void generate(string &s, vector<vector<string>> &ans, vector<string> &v, int index)
{
    if (index == s.size())
    {
        ans.push_back(v);
        return;
    }
    string temp = "";
    for (int i = index; i < s.size(); i++)
    {
        temp.push_back(s[i]);
        if (isPal(s, index, i))
        {
            v.push_back(temp);
            generate(s, ans, v, i + 1);
            v.pop_back();
        }
    }
}

vector<vector<string>> partition(string s)
{
    vector<vector<string>> ans;
    vector<string> v;
    // string temp="";
    generate(s, ans, v, 0);

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    // cout<<s.substr(1,1)<<endl;
    vector<vector<string>> ans = partition(s);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}