#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

// vector<int> fun(vector<int>&A,int B){
//     unordered_map<int,unordered_map<int,int>>mp;
//     int min2;
//     for (int i = 0; i < A.size(); i++)
//     {
//         mp[A[i]]++;
//     }
//     for(auto it:mp)
//     {
//         cout<<it.first<<" "<<it.second<<" "<<endl;
//     }
//     cout<<endl;

//     return{0,0};
// }
vector<int> fun(vector<int>&A,int B){
    unordered_map<int,int>mp;
    for (int i = 0; i < A.size(); i++)
    {
        if(mp[B-A[i]])
            return {mp[B-A[i]],i+1};
        if(!(mp[A[i]]))
            mp[A[i]]=i+1;
    }
    // for(auto it:mp)
    // {
    //     cout<<it.first<<" "<<it.second<<" "<<endl;
    // }
    // cout<<endl;

    return{};
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    int temp;
    vector<int>A;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        A.push_back(temp);
    }
    int sum;
    cin>>sum;

    vector<int>ans=fun(A,sum);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
    

    return 0;
}