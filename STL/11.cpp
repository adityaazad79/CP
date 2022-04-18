// Multi-Map

#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<vector<string>, int> m;
    int a;
    cin >> a;
    vector<string>temp;
    temp.push_back("aa");
    temp.push_back("aa");
    temp.push_back("aa");
    temp.push_back("aa");
    m.insert({temp,0});
    for(auto VectoR:m){
        for(auto Value:VectoR.first){
            cout << Value << " ";
        }
        cout << "second: " << VectoR.second <<endl;
    }
}
