#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

// void generate(vector<string> &ans, string &temp, int n, int ct)
// {
//     if (ct > 1)
//     {
//         if (temp[ct - 1] == '0' && temp[ct - 2] == '0')
//         {
//             return;
//         }
//     }
//     if (ct == n)
//     {
//         ans.push_back(temp);
//         return;
//     }
//     temp.push_back('0');
//     generate(ans, temp, n, ct + 1);
//     temp.pop_back();

//     temp.push_back('1');
//     generate(ans, temp, n, ct + 1);
//     temp.pop_back();
// }

// vector<string> fun(int n)
// {
//     vector<string> ans;
//     string temp = "0";
//     generate(ans, temp, n, 1);
//     temp = "1";
//     generate(ans, temp, n, 1);

//     return ans;
// }

void generate2(int n, vector<string> &ans, string &temp)
{
    if (temp.length() == n)
    {
        ans.push_back(temp);
        return;
    }
    temp.push_back('1');
    generate2(n, ans, temp);
    temp.pop_back();
    if (!temp.empty() && temp.back() == '0')
        return;
    else
    {
        temp.push_back('0');
        generate2(n, ans, temp);
        temp.pop_back();
    }
}

vector<string> fun2(int n)
{
    vector<string> ans;
    string temp = "";
    generate2(n, ans, temp);

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    // fun(n);
    vector<string> V;
    // V = fun(n);
    V = fun2(n);
    for (auto it : V)
        cout << it << endl;

    return 0;
}