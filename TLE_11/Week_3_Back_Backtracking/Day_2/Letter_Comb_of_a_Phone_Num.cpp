#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void generate(vector<string> &V, vector<string> &ans, string a, int index)
{
    if (index == V.size())
    {
        ans.push_back(a);
        return;
    }
    for (int i = 0; i < V[index].size(); i++)
    {
        a.push_back(V[index][i]);
        generate(V, ans, a, index + 1);
        a.pop_back();
    }
}

vector<string> letterCombinations(string digits)
{
    vector<string> ans;
    if(digits.size()==0)
        return {};

    vector<string> V;
    string c = "";
    for (int i = 0; i < digits.size(); i++)
    {
        c = "";
        if (digits[i] == '2')
        {
            c.push_back('a');
            c.push_back('b');
            c.push_back('c');
        }
        else if (digits[i] == '3')
        {
            c.push_back('d');
            c.push_back('e');
            c.push_back('f');
        }
        else if (digits[i] == '4')
        {
            c.push_back('g');
            c.push_back('h');
            c.push_back('i');
        }
        else if (digits[i] == '5')
        {
            c.push_back('j');
            c.push_back('k');
            c.push_back('l');
        }
        else if (digits[i] == '6')
        {
            c.push_back('m');
            c.push_back('n');
            c.push_back('o');
        }
        else if (digits[i] == '7')
        {
            c.push_back('p');
            c.push_back('q');
            c.push_back('r');
            c.push_back('s');
        }
        else if (digits[i] == '8')
        {
            c.push_back('t');
            c.push_back('u');
            c.push_back('v');
        }
        else if (digits[i] == '9')
        {
            c.push_back('w');
            c.push_back('x');
            c.push_back('y');
            c.push_back('z');
        }
        if (c.size())
            V.push_back(c);
    }

    string a = "";
    generate(V, ans, a, 0);

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string digits;
    cin >> digits;

    vector<string> ans;

    ans = letterCombinations(digits);

    for (auto it : ans)
        cout << it << endl;

    return 0;
}