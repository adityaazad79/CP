#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(const vector<int>A){
    // int size=A.size();
    // unordered_map<int,int>ump;
    // int i;
    // for (i=0;i<size;i++)
    //     ump[A[i]]++;

    // int lmax=0,gmax=-1;
    // int usize=ump.size();
    // for (i=0; i<usize;i++)
    // {
    //     cout<<ump[i]<<" "<<A[i]<<" "<<endl;
    //     if(ump[i])
    //         lmax++;
    //     else
    //         lmax=0;
    //     if(gmax<lmax)
    //         gmax=lmax;
    // }
    // cout<<endl<<endl;
     
    // return gmax;
    int size=A.size();
    int mx_elem=INT_MIN;
    for(int i=0;i<size;i++)
        if(mx_elem<A[i])
            mx_elem=A[i];
    mx_elem++;
    int arr[mx_elem];
    for (int i = 1; i < mx_elem; i++)
    {
        arr[i]=0;
    }
    for (int i = 0; i < size; i++)
    {
        arr[A[i]]++;
    }
    int lmax=0,gmax=-1;
    for (int i=1; i<mx_elem;i++)
    {
        // cout<<arr[i]<<" "<<i<<" "<<endl;
        if(arr[i])
            lmax++;
        else
            lmax=0;
        if(gmax<lmax)
            gmax=lmax;
    }
    // cout<<endl<<endl;
    return gmax;
}
int fun2(const vector<int>A){
    unordered_set<int> num_set(A.begin(), A.end());
    int maxlen = 0;

    for (int num:A){
        if (num_set.find(num-1)==num_set.end()) {
            int currnum = num;
            int currlen = 1;

            while (num_set.find(currnum+1)!=num_set.end()) {
                currnum+=1;
                currlen+=1;
            }
            maxlen=max(maxlen, currlen);
        }
    }

    return maxlen;
}

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
    cout<<fun(A)<<endl;
    

    return 0;
}