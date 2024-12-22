// https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/monk-and-his-friends/

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void fun(){
    int n,m;
    cin>>n>>m;
    unordered_set<long long int>ust;
    // set<long long int>ust;
    long long temp;
    while(n--){
        cin>>temp;
        ust.insert(temp);
    }
    while(m--){
        cin>>temp;
        auto it=ust.find(temp);
        if(it!=ust.end())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        ust.insert(temp);
    }
}


void fun2(){
    int n,m;
    cin>>n>>m;
    // unordered_map<int,int>ump;
    map<int,int>ump;
    int temp;
    while(n--){
        cin>>temp;
        ump[temp]++;
    }
    while(m--){
        cin>>temp;
        if(ump[temp]>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        ump[temp]++;
    }
}

void fun3(){
    int n,m;
    cin>>n>>m;
    long long temp;
    unordered_map<long long int,long long int>ump;
    while(n--){
        cin>>temp;
        ump[temp]++;
    }
    while(m--){
        cin>>temp;
        if(ump[temp])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        ump[temp]++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        fun();
        // fun2();
        // fun3();
    }

    return 0;
}