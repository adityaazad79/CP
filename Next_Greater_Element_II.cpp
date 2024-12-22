#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

vector<int>nextGreaterElements(vector<int>&nums){
    int size=nums.size();
    int i;
    for ( i = 0; i < size; i++)
        nums.push_back(nums[i]);
    
    size=nums.size();

    stack<int>S;
    vector<int>V(size);
    for (i = 0; i < size; i++)
    {
        while(!S.empty() && nums[i]>nums[S.top()]){
            V[S.top()]=i;
            S.pop();
        }
        S.push(i);
    }
    while(!S.empty()){
        V[S.top()]=-1;
        S.pop();
    }
    
    vector<int>ans;
    size=size/2;
    for (i = 0; i < size; i++)
    {
        if(V[i]!=-1)
            ans.push_back(nums[V[i]]);
        else
            ans.push_back(-1);
    }

    return ans;
}

// vector<int>nextGreaterElements2(vector<int>&nums){
    // int size=nums.size();
//     int i;
//     stack<int>S;
//     vector<int>V(size);
//     for (i = 0; i <size; i++)
//     {
//         while(!S.empty() && nums[i]>nums[S.top()]){
//             V[S.top()]=i;
//             S.pop();
//         }
//         S.push(i);
//     }
//     for (i = 0; i <size; i++)
//     {
//         while(!S.empty() && nums[i]>nums[S.top()]){
//             V[S.top()]=i;
//             S.pop();
//         }
//         S.push(i);
//     }
//     while(!S.empty()){
//         V[S.top()]=-1;
//         S.pop();
//     }
    
//     vector<int>ans;
//     for (i = 0; i < size; i++)
//     {
//         if(V[i]!=-1)
//             ans.push_back(nums[V[i]]);
//         else
//             ans.push_back(-1);
//     }

//     return ans;
// }

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

    vector<int>ans;
    ans=nextGreaterElements(A);
    // ans=nextGreaterElements2(A);
    // ans.push_back(1);
    // ans.push_back(4224);
    // ans.push_back(24);

    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    

    return 0;
}