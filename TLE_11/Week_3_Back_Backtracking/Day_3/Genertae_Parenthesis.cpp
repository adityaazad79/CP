#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void generate(int open, int close, vector<string> &ans, string &temp)
{
    if (open == 0 && close == 0)
    {
        ans.push_back(temp);
        return;
    }
    if (open > 0)
    {
        temp.push_back('(');
        generate(open - 1, close, ans, temp);
        temp.pop_back();
    }
    if (close > 0 && open < close)
    {
        temp.push_back(')');
        generate(open, close - 1, ans, temp);
        temp.pop_back();
    }
}

vector<string> generateParenthesis(int n)
{
    vector<string> ans;
    string temp = "";

    generate(n, n, ans, temp);
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<string> parenthesis = generateParenthesis(n);

    for (auto it : parenthesis)
        cout << it << endl;

    return 0;
}