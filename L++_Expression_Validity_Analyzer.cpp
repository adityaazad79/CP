// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;
// #define endl '\n'
// const int N = 1e7 + 10;
// const int M = 1e9 + 7;

// int fun(string A)
// {
//     int size = A.size();
//     stack<char> S;
//     int ct = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (A[i] == '<')
//         {
//             S.push(A[i]);
//             ct++;
//             ct++;
//         }
//         else if (S.empty())
//             continue;
//         else if (A[i] == '>' && S.top() == '<')
//             S.pop();
//     }
//     if (S.empty())
//         return ct;
//     return 0;
// }

// int fun2(std::string A)
// {
//     int size=A.size();
//     int ind,ans = 0;
//     stack<int>S;

//     for (int i=0;i<size;i++)
//     {
//         if (A[i]=='<')
//             S.push(i);
//         else if (A[i]=='>' &&!S.empty())
//         {
//             ind =S.top();
//             S.pop();
//             ans=max(ans,i-ind+1);
//         }
//         else if (A[i]=='>' && (S.empty() || S.top()!='<'))
            
//             break;
//             // return ans;
//     }

//     return ans;
// }

// int fun3(string A){
//     int size=A.size();
//     map<char,int>mp;
//     mp['<']=1;
//     mp['>']=-1;
//     int ans=0;
//     int c=0;
//     for (int i = 0; i < size; i++)
//     {
//         if(A[i]=='<'){
//             c++;
//             ans++;
//         }
//         else if(c>0 && A[i]=='>'){

//         }
//     }
    
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     string A;
//     cin >> A;

//     cout << solve(A) << endl;

//     return 0;
// }