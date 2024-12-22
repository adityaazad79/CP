#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void fun(int n, vector<string> &dictionary)
{
    // code here
    sort(dictionary.begin(), dictionary.end());
    string temp = dictionary[0];
    bool flag = 1;
    for (int i = 1; i < n; i++)
    {
        if (temp == dictionary[i])
        {
            cout << "Invalid" << endl;
            flag = 0;
        }
        temp = dictionary[i];
    }
    if (flag)
    {
        cout << dictionary[0] << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    vector<string> dict;

    fun(n, dict);

    return 0;
}