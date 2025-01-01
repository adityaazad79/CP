#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

// vector<int> nextGreaterElement(vector<int> &nums1,vector<int>&nums2){
//     int n=nums1.size();
//     int m=nums2.size();

//     int i;
//     unordered_map<int,int>ump;
//     for (i = 0; i < n; i++)
//         ump[nums1[i]]=1;
    
//     vector<int>V(m);
//     stack<int>S;
//     // S.push(nums1[0]);
//     for (i = 0; i < m; i++)
//     {
//         if(ump[nums2[i]]){
//             while(!S.empty() && nums2[i]>nums2[S.top()]){
//                 // V[S.top()]=ump[nums2[i]+1];
//                 V[S.top()]=i;
//                 S.pop();
//             }
//             S.push(i);
//             // cout<<nums2[i]<<" ";
//         }
//     }
//     // cout<<endl;
//     while(!S.empty()){
//         V[S.top()]=-1;
//         S.pop();
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if(V[i]!=-1)
//             V[i]=nums2[V[i]];
//     }
    
//     return V;
// }

vector<int> nextGreaterElement2(vector<int> &nums1,vector<int>&nums2){
    int n=nums1.size();
    int m=nums2.size();

    stack<int>S;
    vector<int>V(m);
    for (int i = 0; i < m; i++)
    {
        while(!S.empty() && nums2[i]>nums2[S.top()]){
            V[S.top()]=i;
            S.pop();
        }
        S.push(i);
    }
    while(!S.empty()){
        V[S.top()]=-1;
        S.pop();
    }
    unordered_map<int,int>ump2;
    for(int i=0;i<m;i++){
        if(V[i]!=-1)
            ump2[nums2[i]]=nums2[V[i]];
        else
            ump2[nums2[i]]=-1;
    }

    vector<int>ans;

    for(int i=0;i<n;i++)
        ans.push_back(ump2[nums1[i]]);

    return ans;
}


int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    int n;
    int temp;
    vector<int>nums1;
    int i;
    cin>>n;
    // vector<int>nums2;
    for (i = 0; i < n; i++)
    {
        cin>>temp;
        nums1.push_back(temp);
    }
    int m;
    cin>>m;
    vector<int>nums2;
    for (i = 0; i < m; i++)
    {
        cin>>temp;
        nums2.push_back(temp);
    }

    // cout<<"Ad"<<endl;
    vector<int>A;
    A=nextGreaterElement2(nums1,nums2);
    // A={1,2};
    // A.push_back(1);
    // A.push_back(2);
    for (int i=0;i<A.size();i++)
        cout<<A[i]<<" ";
    cout<<endl;

    return 0;
}