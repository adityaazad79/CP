#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    int sum = a % 9;
    if (sum == 0)
        sum = 9;
    printf("%d\n", sum);
    return 0;
}
