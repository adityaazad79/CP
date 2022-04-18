// Map

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    map<string, int> m;
    m.insert({"bb", 1});
    m.insert({"aa", 2}); // O(log(n))
    m.insert({"azad", 4});
    m.insert({"manish", 4});
    //m.insert({"bb",3});
    // m["bb"]=3;
    // cout << m.size() << endl;
    // m.erase({"bb",1});
    //m.erase("bb");
    //auto it = m.begin();
    //m.erase(it);
    if (m.end() != m.find("zz"))
    {
        auto it = m.find("azad");
        m.erase(it);
    }

    cout << m.size() << endl;
    // for (auto val : m)
    // {
    //     cout << val.first << " " << val.second << endl;
    // }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    m.clear();
      cout << m.size() << endl;
    return 0;
}
