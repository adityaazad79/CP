#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
const int M = 1e9 + 7;

string fun(string A){
    int size=A.size();
    if(size==1)
        return (A+'E'+'0');
    string ans="";
    if(A[0]=='-'){
        ans.push_back(A[0]);
        A=A.substr(1,size-1);
        size=A.size();
    }
    if(A[size-1]=='.'){
        A.pop_back();
    }
    size=A.size();

    // Zero(S) in front
    int zf=0;
    while(A[zf]=='0'){
        zf++;
    }
    A=A.substr(zf,size-zf);
    size=A.size();
    int e=0;
    int i=0;
    while(A[e]!='.' && e<size){
        e++;
    }

    // Zero(s) in rear
    int zr=size-1;
    bool flag=1;
    bool flag2=0;
    // bool flag3=0;
    if(A[e]=='.'){
        while(zr<size && A[zr]=='0'){
            zr--;
        }
        A=A.substr(0,zr+1);
        size=A.size();
        flag=0;
        // flag3=1;
        // cout<<e<<endl;
        // if(A[size-1]=='.'){
        //     A.pop_back();
        //     size--;
        // }
    }
    // cout<<A<<endl;
    // cout<<e<<endl;
    // size=A.size();
    // while(A[e]!='.' && e<size){
    //     e++;
    // }
    if(A[A.size()-1]=='.'){
        A.pop_back();
        size--;
        flag=1;
        // flag3=1;
    }
    // cout<<A<<endl;
    // cout<<e<<endl;
    // cout<<flag<<endl;
    // cout<<flag2<<endl;


    // Zero AFter Decimal
    int zafd=0;
    if(e==0){
        while(zafd+1<size && A[zafd+1]=='0'){
            zafd++;
        }
        // A=A.substr(zafd+1,size);
        size=A.size();
        if(size==1)
            return (ans+'E'+'0');
        // cout<<"zafd : "<<zafd<<endl;
        // cout<<"size : "<<size<<endl;
        // cout<<A<<endl;
    
        e=-zafd-1;
        ans.push_back(A[zafd+1]);
        if(zafd+2<size)
            ans.push_back('.');
        ans.append(A.substr(zafd+2,size));
        ans.push_back('E');
        ans.append(to_string(e));
        return ans;
    }
    if(flag)
        e--;

    int s1=A.size()-1;
    while(A[s1]=='0'){
        A.pop_back();
        s1--;
    }
    size=A.size();
    if(A[size-1]=='.'){
        A.pop_back();
        size=A.size();
        if(size==1)
            return (A+'E'+to_string(e-1));
    }
    else if(!flag)
        flag2=1;

    if(size==1)
        return (ans+A+'E'+to_string(e));
        
    // cout<<"e : "<<e<<endl;

    ans.push_back(A[0]);
    ans.push_back('.');
    if(flag2){
        ans.append(A.substr(1,e-1));
        if(e+1<size)
            ans.append(A.substr(e+1,size));
    }
    else{
        ans.append(A.substr(1,e));
        if(e+1<size)    
            ans.append(A.substr(e+1,size));
    }
    ans.push_back('E');
    if(flag2)
        ans.append(to_string(e-1));
    else
        ans.append(to_string(e));


    // cout<<A<<endl;

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string A;
    cin>>A;
    cout<<fun(A)<<endl;

    return 0;
}