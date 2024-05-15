#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

vector<int> fun(string A){
    int size=A.size();
    unordered_map<char,int>ump;
    for (int i = 0; i < size; i++)
    {
        ump[A[i]]++;
    }
    vector<int>ans;
    for(auto i:ump){
        ans.push_back(i.second);
    }
    // for(int i=0;i<A.size();i++){

    // }
    return ans;
}

// vector<int>fun(string A){
//     unordered_map<char, int> mp;
//     vector<int> ans;
//     for(int i = 0; i< A.size(); i++){
//         mp[A[i]]++;
//     }
//     for(int i = 0; i < A.size(); i++){
//         if(mp[A[i]]==0)
//             continue;
//         ans.push_back(mp[A[i]]);
//         mp[A[i]]=0;
//     }
//     return ans;
// }



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin>>s;

    vector<int>A;
    A=fun(s);
    for (int i = 0; i < A.size(); i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}