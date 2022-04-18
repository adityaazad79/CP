// Multi-Map

#include <bits/stdc++.h>
using namespace std;
int main()
{
    multimap<string, int> m;
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        string s;
        cin >> s;
      m.insert({s,i});
    }
    string s;
    cin >> s;
    if (m.find(s) != m.end())
    {
      //  cout << m[s] << endl;
      auto it = m.find(s);
      cout << (*it).first << " " << (*it).second << endl;
    //  m.erase(it);// first element ko erase karega 
    m.erase("aa");//total aa ko erase kar dega 
    }
    for (auto PaiR : m)
    {
        cout << PaiR.first << " " << PaiR.second << endl;
    }
}
