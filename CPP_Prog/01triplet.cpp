// Pythogorian triplet

#include <bits/stdc++.h>
using namespace std;
#define max(x, y) (x > y ? x : y)

int main(int argc, char const *argv[]){

// #ifndef ONLINE_JUDGE
	// freopen("input.in", "r", stdin);
	// freopen("output.in", "w", stdout);
// #endif

	int x, y, z;

	x = 5, y = 3, z = 4;

	int flag = 0;
	int max = max(max(x, y), z);
	if (max == x)
		if (x * x == y * y + z * z)
			flag = 1;
		else if (max == y)
			if (y * y == x * x + z * z)
				flag = 1;
			else if (max == z)
				if (z * z == x * x + y * y)
					flag = 1;

	cout << "Max : " << max << endl;

	if (flag)
		cout << "Pythagorian Triplet" << endl;
	else
		cout << "Not a Pythagorian Triplet" << endl;

	return 0;
}