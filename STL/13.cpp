// Multi-Map

#include <bits/stdc++.h>
using namespace std;
int main()
{
   unordered_set<string> m;// hash table
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        string s;
        cin >> s;
      m.insert(s);
    }
for(auto Str :m){
cout << Str << endl;
}
}
 
/*hash -sirf primitive ke liyea h ,hash hamesa 0(1)
string
int
float
bool
double 
char
*/