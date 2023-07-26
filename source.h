#include <bits/stdc++.h>

using namespace std;

const int N = 1e4 + 10;
const int mul = 233, Mod = 998244353;

int query(int x, int y, int z);

int A[N];

int guess(int n, int Taskid) {
	memset(A, 0, sizeof A);

	// You only need to do something here.

	int ret = 0;
	for (int i = n; i; i--) ret = 1ll * (ret + A[i]) * mul % Mod;
	return ret;
}
