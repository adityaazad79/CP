#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun1(string A){
    int size=A.size();
    int lc=0,gc=-1,la=-1,lb=-1,i;
    for (i = 0; i < size; i++)
    {
        if(A[i]=='0')
            lc++;
        if(gc<lc){
            gc=lc;
            lb=i;
        }
        if(A[i]=='1')
            lc=0;
    }
    la=lb-gc;
    lb++;
    while(la>=0 && A[la]=='1'){
        gc++;
        la--;
    }
    while(lb<size && A[lb]=='1'){
        gc++;
        lb++;
    }
    return gc;
}



int fun2(string A){
    int size=A.size();
    int lc=0,gc=-1,la=-1,lb=-1,i;
    for (i = 0; i < size; i++)
    {
        if(A[i]=='0')
            lc++;
        if(gc<lc){
            gc=lc;
            lb=i;
        }
        if(A[i]=='1')
            lc=0;
    }
    la=lb-gc;
    lb++;

    for ( i = la+1; i < lb; i++)
    {
        A[i]='1';
    }

    lc=0,gc-1;
    for (i = 0; i < size; i++)
    {
        if(A[i]=='1')
            lc++;
        if(gc<lc){
            gc=lc;
        }
        if(A[i]=='0')
            lc=0;
    }
    

    return gc;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string A;
    cin>>A;
    cout<<fun2(A)<<endl;

    return 0;
}