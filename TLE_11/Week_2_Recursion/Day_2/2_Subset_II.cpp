#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void generate(vector<int>&nums,set<vector<int>>&sv,vector<int>&temp,int index){
    if(index==nums.size()){
        // sort(temp.begin(),temp.end());
        sv.insert(temp);
        return;
    }

    temp.push_back(nums[index]);
    generate(nums,sv,temp,index+1);
    temp.pop_back();

    generate(nums,sv,temp,index+1);
}

vector<vector<int>>subsetsWithDup(vector<int>&nums){
    set<vector<int>>sv;
    vector<int>temp;
    sort(nums.begin(),nums.end());
    generate(nums,sv,temp,0);

    vector<vector<int>>ans;
    for(auto it:sv)
        ans.push_back(it);

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> V(n);
    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
    }

    vector<vector<int>> ans;
    ans = subsetsWithDup(V);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}