#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

string fun(string A, string B)
{
    // int size_A=A.size();
    // int size_B=B.size();
    // int size_ans=max(size_A,size_B)+1;
    // vector<char>ans(size_ans,0);
    // int size_min=min(size_A,size_B),i,j=size_ans-1;
    // int size_diff=abs(size_A-size_B);
    // int carry=0;
    // for (i = 0; i < size_min; i++)
    // {
    //     if(carry)
    //         ans[j]=1;
    //     carry=0;
    //     ans[j]=ans[j]+A[size_A--]+A[size_B--];
    //     if(ans[j]==2)
    //         carry=1;
    // }
    int n = A.length(), m = B.length();
    int carry = 0;
    string ans = "";
    int i = n - 1, j = m - 1;
    while (i >= 0 || j >= 0 || carry != 0)
    {
        int sum = 0;
        if (i >= 0)
        {
            sum += (A[i] -'0');
            i--;
        }
        if (j >= 0)
        {
            sum += (B[j] -'0');
            j--;
        }
        sum += carry;
        ans = to_string(sum % 2) + ans;
        carry = sum / 2;
    }
    return ans;
}

string fun2(string A,string B){
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    string ans;
    int size_A=A.size();
    int size_B=B.size();
    int carry=0;
    int max_size=max(size_A,size_B);
    int sum=0,rem=0;
    for (int i=0;i<max_size;i++)
    {
        sum=carry;
        if(i<size_A)
            sum=sum+A[i]-'0';
        if(i<size_B)
            sum=sum+B[i]-'0';
        // else
            // sum+=0;
        
        ans.push_back(char(sum%2+'0'));
        rem=rem+(sum%2);
        carry=sum/2;
    }
    if(carry)
        ans.push_back('1');
    
    reverse(ans.begin(),ans.end());

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string A, B;
    cin >> A >> B;
    cout << fun2(A, B) << endl;

    return 0;
}