#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
const int M = 1e9 + 7;

string fun(string A){
    int size=A.size();
    string ans="";
    int i=0;
    if(A[0]=='-'){
        ans.push_back(A[0]);
        while(i<size){
            A[i]=A[i+1];
            i++;
        }
        A.pop_back();
    }
    cout<<A<<endl;
    size=A.size();
    int zero_ct=0;
    while(A[zero_ct]=='0')
        zero_ct++;
    // cout<<zero_ct<<endl;
    bool flag=0;
    int ind=-1;
    for (int i = zero_ct; i < size; i++)
    {
        if(A[i]=='.'){
            flag=1;
            ind=i;
            break;
        }
    }
    i=1;
    while(A[size-i]=='0' && flag){
        i++;
        A.pop_back();
    }
    size=A.size();
    if(ind==size-1){
        A.pop_back();
        ind=-1;
    }
    size=A.size();
    cout<<"size : "<<size<<endl;
    // cout<<ind<<endl;
    if(ind==-1){
        ans.push_back(A[0]);
        // flag=0;
        // if(A[0]=='-'){
        //     flag=1;
        //     ans.push_back(A[1]);
        // }
        // if(flag)
            // i=2;
        // else
        i=1;
        ind=0;
        if(i<size)
            ans.push_back('.');
        while(i<size){
            ans.push_back(A[i++]);
            ind++;
        }
        ans.push_back('E');
        ans.append(to_string(ind));
        return ans;
    }
    flag=0;
    if(A[zero_ct]=='.')
        flag=1;
    if(ind==0+zero_ct){
        ans.push_back(A[1+zero_ct]);
        if(zero_ct)
            ans.push_back('.');
        ind=0;
        i=zero_ct+2;
        while (i<size)
        {
            ans.push_back(A[i++]);
            ind++;
        }
        ans.push_back('E');
        if(flag){
            ans.push_back('-');
            ans.push_back('1');
            return ans;
        }
    }
    ans.push_back(A[zero_ct]);
    flag=0;
    if(A[zero_ct]=='-'){
        ans.push_back(A[zero_ct+1]);
        flag=1;
        zero_ct++;
    }
    ans.push_back('.');
    i=zero_ct+1;
    while(i<ind){
        ans.push_back(A[i++]);
    }
    i++;
    while(i<size)
        ans.push_back(A[i++]);
    ans.push_back('E');
    if(flag)
        ans.append(to_string(ind-2));
    else
        ans.append(to_string(ind-1));

    return ans;
}

int main()
{
    string A;
    cin>>A;
    cout<<fun(A)<<endl;

    return 0;
}