#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
const int M = 1e9 + 7;

string fun(string A, string B){
    int size=A.size();

    int cow=0;
    int bull=0;

    unordered_map<char,int>C;
    for (int i=0;i<size;i++)
    {
        if(A[i]==B[i])
            bull++;
        else{
            C[A[i]]++;
            // C[A[i]]++;
            // C[B[i]]++;
            // if(C[B[i]]){
            //     cow++;
            //     C[A[i]]--;
            //     C[B[i]]--;
            // }
        }
    }
    for (int i=0;i<size;i++)
    {
        if(A[i]==B[i])
            continue;
        else if(C[B[i]]>0)
        {
            C[B[i]]--;
            cow++;
            // C[A[i]]++;
            // C[B[i]]++;
            // if(C[B[i]]){
            //     cow++;
            //     C[A[i]]--;
            //     C[B[i]]--;
            // }
        }
    }
    
    // cout<<to_string(bull)+"A"+to_string(cow)+"B"<<endl;
    return (to_string(bull)+"A"+to_string(cow)+"B");
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string A,B;
    cin>>A>>B;

    cout<<fun(A,B)<<endl;

    return 0;
}