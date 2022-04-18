#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> &v2 = v;
  
    //vector<int> ::iterator it=v.begin();
    //vector<int> ::iterator it=v.begin();
    //vector<int> ::iterator it=v.begin();
    //vector<int> ::iterator it=v.begin();
    //vector<int> ::iterator it=v.begin();
    // for(;it!=v.end();it++){
    //     cout <<*it << " ";
    // }
    // for(vector<int>::iterator it=v.begin();it!=v.end();it++){ cout <<*it << " ";}
    v[5]=1;
    for (auto it = v2.begin(); it != v2.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}
/* general loop 
for(int i=0;i< n;i++){}
iterator 
  for(auto it=v.begin();it!=v.end();it++){ cout <<*it << " ";}{

  }
  range based 
  for (auto vAL :v){}
*/