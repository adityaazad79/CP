#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(int A, vector<int> &B)
{
    int sum = 0;
    for (auto it : B)
        sum += it;

    int ct = 0, ctz = 0;
    int th = sum / 3;
    if (th != sum / 3.0)
        return 0;
    sum = 0;
    int flag = 1;
    // sum = B[0];
    int i;
    for (i = 0; i < A - 1; i++)
    {
        sum += B[i];
        if (sum == th)
        {
            ct++;
            sum = 0;
            if (B[i + 1] == 0 && i + 2 < A && i!=0)
            {
                // ctz++;
                while(B[i++]==0)
                    if(flag)
                        ctz++;
                    else{

                        if(!ctz)
                            ctz=1;
                        ctz=2*ctz;
                    }
            }
            flag=0;
        }
    }
    sum += B[i];
    cout << "B[i] : " << B[i] << endl;
    cout << "ct : " << ct << endl;
    cout << "Sum : " << sum << " th : " << th << endl;
    if (sum == th)
        ct++;
    if(ct==3)
        cout<<"ct3"<<endl;

    return ctz;
    // return (pow(2, ctz));
}

int fun2(int A, vector<int> &B)
{
    if (A < 3)
        return 0;
    int totalSum = 0, sum = 0, ans = 0;

    for (int num : B)
        totalSum += num;

    if (totalSum % 3 != 0)
        return 0;

    int x = totalSum / 3;

    int twiceX = x * 2;

    int xCount = 0;

    for (int idx = 0; idx < A - 1; idx++)
    {
        sum += B[idx];
        if (sum == twiceX)
            ans += xCount;
        if (sum == x)
            xCount++;
    }

    return ans;
}

int fun3(int A,vector<int>&B){
    if(A<3)
        return 0;
    int sum=0;
    for(auto it:B)
        sum+=it;
    
    if(sum%3!=0)
        return 0;
     
     int ct=0,ctz=0,th1=sum/3;
     int th2=th1*2;
     sum=0;
     for (int i=0;i<A-1;i++)
     {
        sum+=B[i];
        if(sum==th2)
            ctz+=ct;
        if(sum==th1)
            ct++;
     }
     
    return ctz;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> A;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        A.push_back(temp);
    }

    int x = fun3(A.size(), A);

    cout << x << endl;

    return 0;
}