#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

vector<int>fun(vector<int>A,vector<int>B){
    // int n=A.size();
    // int m=B.size();

    // unordered_map<int,int>ump1;
    // unordered_map<int,int>ump2;
    // int i;
    // for (i = 0; i < n; i++)
    //     ump1[A[i]]++;

    // for (i = 0; i < m; i++)
    //     ump2[B[i]]++;
    
    // vector<int>ans;
    // int mi;
    // int m2=min(ump1.size(),ump2.size());
    // // cout<<m2<<" m2"<<endl;
    // unordered_map<int,int>rec;
    // for (i = 0; i < m2; i++)
    // {
    //     if(ump1[A[i]] && ump2[A[i]] && !rec[A[i]]){
    //         mi=min(ump1[A[i]],ump2[A[i]]);
    //         // if(A[i]==3)
    //             // cout<<ump1[A[i]]<<" "<<ump2[A[i]]<<" "<<"mi "<<mi<<endl;
    //         while(mi--)
    //             ans.push_back(A[i]);
    //         rec[A[i]]++;
    //     }
    // }
    
    // return ans;




    unordered_map<int, int> map;
    vector<int> ans;

    for(int val : A) {
        map[val]++;
    }

    for(int val : B) {
        if(map[val] > 0) {
            ans.push_back(val);
            map[val]--;
        }
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    cin>>n>>m;
    int temp;
    vector<int>A;
    vector<int>B;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        A.push_back(temp);
    }
    for (int i = 0; i < m; i++)
    {
        cin>>temp;
        B.push_back(temp);
    }

    vector<int>C =fun(A,B);
    for (int i = 0; i < C.size(); i++)
    {
        cout<<C[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}