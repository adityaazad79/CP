// // GFG

// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;
// #define endl '\n'
// const int N = 1e7 + 10;
// const int M = 1e9 + 7;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     // int n;
//     // cin>>n;
//     // int k;
//     // cin>>k;

//     long long temp=987598759875;
//     temp=123123123;
//     temp=18;
//     for (int i = 2; i < 10; i++)
//     {
//         cout<<"i : "<< temp%i<<endl;
//     }
    
//     // cout<<temp%8<<endl;

//     return 0;
// }


// C++ program to find Sum of digits of a
// number formed by repeating a number X number of
// times until sum become single digit.
#include <bits/stdc++.h>
using namespace std;

// return single digit sum of a number.
int digSum(int n)
{
	if (n == 0)
		return 0;
	return (n % 9 == 0) ? 9 : (n % 9);
}

// Returns recursive sum of digits of a number 
// formed by repeating a number X number of
// times until sum become single digit.
int repeatedNumberSum(int n, int x)
{
	int sum = x*digSum(n);
	return digSum(sum);
}

// Driver program
int main()
{
	int n = 345435877, x = 10000;
	cout << repeatedNumberSum(n, x) << endl;
	return 0;
}
