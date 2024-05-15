#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(vector<int>A,int B){
    int size=A.size();
    int ans=0,left,right,i,bulb;
    for (i=0;i<size;i=right+B){
        right=min(size-1,i+B-1);
        left=max(0,i-B+1);
        bulb=0;
        while(right>=left){
            if(A[right]){
                bulb=1;
                break;
            }
            right--;
        }
        if(!bulb)
            return -1;
        ans++;
    }
    
    return ans;
}

int fun2(vector<int>A,int B){
    int size=A.size();
    int ans=0,left,right,i,bulb;
    for (i=0;i<size;i=right+B){
        right=min(size-1,i+B-1);
        left=max(0,i-B+1);
        bulb=0;
        while(right>=left){
            if(A[right--]){
                bulb=1;
                right++;
                break;
            }
        }
        if(!bulb)
            return -1;
        ans++;
    }
    
    return ans;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    vector<int>A;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        A.push_back(temp);
    }
    cin>>temp;

    cout<<fun2(A,temp)<<endl;
    

    return 0;
}