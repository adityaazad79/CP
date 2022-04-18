// Ordered Map
// Un-ordered Map

#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int> m; // O(1) - for all operations // Based on hash
    // map<string, int> m; // O(log(n)) // Based on tree
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        string s;
        cin >> s;
        m[s] = m[s] + 1;
    }
    string s;
    cin >> s;
    if (m.find(s) != m.end())
    {
        cout << m[s] << endl;
    }
    for (auto PaiR : m)
    {
        cout << PaiR.first << " " << PaiR.second << endl;
    }
}
