#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(string A,string B){
    if(A.size()!=B.size())
        return 0;
    unordered_map<char,int>ump1;
    unordered_map<char,int>ump2;
    for (int i = 0; i < A.size(); i++)
        ump1[A[i]]++;
    for (int i = 0; i < B.size(); i++)
        ump2[B[i]]++;
    
    for (int i = 0; i < A.size(); i++)
        if(ump1[A[i]]!=ump2[A[i]])
            return 0;
    return 1;
}

int main()
{
    string A,B;
    cin>>A>>B;
    cout<<fun(A,B)<<endl;

    return 0;
}