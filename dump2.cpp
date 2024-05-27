#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
const int M = 1e9 + 7;


map<string,int> fun(vector<string>A){
    map<string,int>mp;
    vector<string>ans;
    int temp;

    for (int i = 0; i < A.size(); i++)
    {
        mp[A[i]]++;
    }
    // A.clear();
    return mp;
}

int main()
{
    int n;
    vector<string>S;
    cin>>n;
    string temp;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        S.push_back(temp);
    }
    map<string,int>mp;
    mp=fun(S);

    for(auto &it:mp)
        cout<<it.first<<" "<<it.second<<" "<<endl;
    

    return 0;
}